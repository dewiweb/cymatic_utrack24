// rea decompile_all
// name: FUN_005c8210
// address: 0x5c8210
// body: available
// range: 0x5c8210-0x5c8450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c8210(void)

{
  int *_Memory;
  int iVar1;
  uint uVar2;
  MMRESULT MVar3;
  int *piVar4;
  undefined4 *dwInstance;
  undefined4 uVar5;
  undefined1 *in_ECX;
  int *_Memory_00;
  int in_EDX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *uDeviceID;
  HMIDIIN local_78;
  int local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  tagMIDIINCAPSW local_60;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071abba;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = in_ECX;
  local_14 = uVar2;
  if (in_EDX != 0) {
    puVar7 = &DAT_00bfe12c;
    local_68 = (undefined1 *)0xffffffff;
    puVar6 = (undefined1 *)0x0;
    local_70 = &DAT_00bfe12c;
    local_8 = 0;
    local_74 = in_EDX;
    local_6c = (undefined1 *)midiInGetNumDevs();
    uDeviceID = (undefined1 *)0x0;
    if (local_6c != (undefined1 *)0x0) {
      do {
        _memset(&local_60,0,0x4c);
        MVar3 = midiInGetDevCapsW((UINT_PTR)uDeviceID,&local_60,0x4c);
        if (MVar3 == 0) {
          if (local_64 == puVar6) {
            local_68 = uDeviceID;
            FUN_0045cd10(local_60.szPname,uVar2);
            puVar7 = local_64;
            local_6c = &DAT_00bfe12c;
            local_70 = local_64;
            local_64 = &DAT_00bfe12c;
            break;
          }
          puVar6 = puVar6 + 1;
        }
        uDeviceID = uDeviceID + 1;
      } while (uDeviceID < local_6c);
    }
    piVar4 = operator_new(8);
    _Memory = (int *)(puVar7 + -8);
    *piVar4 = (int)puVar7;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      *_Memory = *_Memory + 1;
      UNLOCK();
    }
    piVar4[1] = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    dwInstance = operator_new(0x2838);
    *dwInstance = 0;
    dwInstance[1] = piVar4;
    dwInstance[2] = local_74;
    dwInstance[4] = 0;
    dwInstance[5] = 0x1000;
    FID_conflict__free((void *)dwInstance[4]);
    uVar5 = FUN_004c554b(0x1000);
    dwInstance[4] = uVar5;
    dwInstance[8] = 0;
    *(undefined8 *)(dwInstance + 6) = 0;
    *(undefined1 *)(dwInstance + 9) = 0;
    *(undefined1 *)(dwInstance + 10) = 0;
    *(undefined8 *)(dwInstance + 0xc) = 0;
    MVar3 = midiInOpen(&local_78,(UINT)local_68,0x42e450,(DWORD_PTR)dwInstance,0x30000);
    if (MVar3 == 0) {
      *dwInstance = local_78;
      piVar4[1] = (int)dwInstance;
    }
    else {
      FUN_0042e2a0();
      FUN_004bfe14(dwInstance,0x2838);
      iVar1 = piVar4[1];
      if (iVar1 != 0) {
        FUN_0042e2a0();
        FUN_004bfe14(iVar1,0x2838);
      }
      _Memory_00 = (int *)(*piVar4 + -8);
      if (_Memory_00 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory_00;
        *_Memory_00 = *_Memory_00 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory_00);
        }
      }
      FUN_004bfe14(piVar4,8);
    }
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar1 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


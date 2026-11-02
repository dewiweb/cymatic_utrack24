// rea decompile_all
// name: FUN_005c8460
// address: 0x5c8460
// body: available
// range: 0x5c8460-0x5c85d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c8460(void)

{
  int *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  UINT UVar3;
  MMRESULT MVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  UINT_PTR uDeviceID;
  uint uVar7;
  undefined1 *local_64;
  tagMIDIINCAPSW local_60;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071abfb;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  local_14 = uVar2;
  UVar3 = midiInGetNumDevs();
  uDeviceID = 0;
  if (UVar3 != 0) {
    do {
      _memset(&local_60,0,0x4c);
      MVar4 = midiInGetDevCapsW(uDeviceID,&local_60,0x4c);
      if (MVar4 == 0) {
        FUN_0045cd10(local_60.szPname,uVar2);
        iVar5 = in_ECX[2];
        iVar6 = iVar5 + 1;
        if (in_ECX[1] < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar5 + 2;
          }
          uVar7 = iVar5 + 9 + (iVar6 >> 1) & 0xfffffff8;
          if (in_ECX[1] != uVar7) {
            if ((int)uVar7 < 1) {
              FID_conflict__free((void *)*in_ECX);
              *in_ECX = 0;
            }
            else if (*in_ECX == 0) {
              iVar5 = FUN_004c554b();
              *in_ECX = iVar5;
            }
            else {
              iVar5 = FUN_004c553b(*in_ECX,uVar7 * 4);
              *in_ECX = iVar5;
            }
            in_ECX[1] = uVar7;
          }
        }
        iVar5 = in_ECX[2];
        in_ECX[2] = iVar5 + 1;
        puVar1 = (undefined4 *)(*in_ECX + iVar5 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = local_64;
          local_64 = &DAT_00bfe12c;
        }
        _Memory = (int *)(local_64 + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar5 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(_Memory);
          }
        }
      }
      uDeviceID = uDeviceID + 1;
    } while (uDeviceID < UVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


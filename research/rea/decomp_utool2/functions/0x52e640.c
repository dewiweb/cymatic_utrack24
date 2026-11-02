// rea decompile_all
// name: FUN_0052e640
// address: 0x52e640
// body: available
// range: 0x52e640-0x52e7cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e640(undefined4 param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *_Memory;
  int iVar5;
  undefined4 extraout_EDX;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_30;
  int local_2c;
  uint local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c9eb;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = 0;
  local_14 = uVar3;
  if (*(int *)(*(int *)(in_ECX + 0x24) + 0x9c) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0068f6f0(in_ECX + 0x28);
  }
  local_2c = (int)uVar7;
  iVar5 = *(int *)(*(int *)(local_2c + 4) + 0x9c);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(byte *)(iVar5 + 0x30) & 1;
    iVar5 = *(int *)(iVar5 + 0x14) + -1;
    uVar7 = CONCAT44(iVar5,local_2c);
    while (-1 < iVar5) {
      uVar7 = FUN_0068fb80(0xfffffffe);
      uVar6 = uVar6 + (int)uVar7;
      iVar5 = (int)((ulonglong)uVar7 >> 0x20) + -1;
      uVar7 = CONCAT44(iVar5,local_2c);
    }
  }
  if ((uVar6 != 0) && (iVar5 = 0, 0 < (int)uVar6)) {
    do {
      local_2c = (int)uVar7;
      if (*(int *)(*(int *)(local_2c + 4) + 0x9c) != 0) {
        uVar8 = FUN_0068fb00(iVar5);
        uVar7 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),local_2c);
        if ((int *)uVar8 != (int *)0x0) {
          (**(code **)(*(int *)uVar8 + 0x44))(local_24,uVar3);
          local_8 = 0;
          if (*(code **)(*local_24[0] + 0x28) == FUN_004133b0) {
            if (*(code **)(*local_24[0] + 0x40) == FUN_004133b0) {
              bVar2 = true;
            }
            else {
              puVar4 = (undefined4 *)FUN_00635650(&local_30);
              local_28 = local_28 | 1;
              if (*(char *)*puVar4 == '\0') goto LAB_0052e752;
              bVar2 = true;
            }
          }
          else {
LAB_0052e752:
            bVar2 = false;
          }
          if ((local_28 & 1) != 0) {
            local_28 = local_28 & 0xfffffffe;
            _Memory = (int *)(local_30 + -8);
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
          if (bVar2) {
            FUN_00413260(local_24);
          }
          local_8 = 0xffffffff;
          (**(code **)(*local_24[0] + 0x54))(local_1c);
          uVar7 = CONCAT44(extraout_EDX,local_2c);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar6);
  }
  local_2c = (int)uVar7;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar7 >> 0x20),param_1)
  ;
  return;
}


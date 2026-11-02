// rea decompile_all
// name: FUN_00550d10
// address: 0x550d10
// body: available
// range: 0x550d10-0x550e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550d10(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0071088e;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar7 = 0;
  if (0 < (int)param_1[0x16]) {
    do {
      FUN_004110e0(local_18,uVar7);
      puVar5 = local_18[0];
      local_8 = CONCAT31(local_8._1_3_,1);
      if ((*(char *)(local_18[0] + 7) == '\0') || (*(char *)((int)local_18[0] + 0x1d) == '\0')) {
        if (local_18[0][2] == 1) {
          LOCK();
          local_18[0][1] = local_18[0][1] + 1;
          UNLOCK();
          FUN_00550d10(local_18[0]);
        }
        uVar7 = uVar7 + 1;
      }
      else {
        local_18[0][0x17] = 0;
        if (uVar7 < (uint)param_1[0x16]) {
          puVar4 = *(undefined4 **)(param_1[0x14] + uVar7 * 4);
          iVar2 = param_1[0x14] + uVar7 * 4;
          if (puVar4 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar4 + 1;
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)*puVar4)(1);
            }
          }
          param_1[0x16] = param_1[0x16] + -1;
          if (0 < (int)(param_1[0x16] - uVar7)) {
            FUN_004c1df0(iVar2,iVar2 + 4,(param_1[0x16] - uVar7) * 4);
          }
          iVar2 = param_1[0x16];
          if ((iVar2 * 2 < (int)param_1[0x15]) && (iVar2 < (int)param_1[0x15])) {
            FUN_00409cf0(iVar2);
          }
        }
      }
      local_8 = local_8 & 0xffffff00;
      LOCK();
      piVar1 = puVar5 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar5)(1);
      }
    } while ((int)uVar7 < (int)param_1[0x16]);
  }
  LOCK();
  piVar1 = param_1 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)*param_1)(1,uVar6);
  }
  ExceptionList = local_10;
  return;
}


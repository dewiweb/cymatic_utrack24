// rea decompile_all
// name: FUN_005852e0
// address: 0x5852e0
// body: available
// range: 0x5852e0-0x5853f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005852e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int iStack_c;
  
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = in_ECX;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      piVar1 = (int *)FUN_0041a1f0(&local_20,iVar4);
      iVar2 = *piVar1;
      local_18 = iVar2;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_20 + 1;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_20)(1);
        }
      }
      local_1c = *(uint *)(iVar2 + 0x10);
      iVar2 = *(int *)(iVar2 + 0x14);
      FUN_00633420();
      if ((iVar2 <= iStack_c) && ((iVar2 < iStack_c || (local_1c <= local_10)))) {
        iVar2 = param_1[2];
        iVar3 = iVar2 + 1;
        if (param_1[1] < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar2 + 2;
          }
          uVar5 = iVar2 + 9 + (iVar3 >> 1) & 0xfffffff8;
          if (param_1[1] != uVar5) {
            if ((int)uVar5 < 1) {
              FID_conflict__free((void *)*param_1);
              *param_1 = 0;
            }
            else if (*param_1 == 0) {
              iVar2 = FUN_004c554b();
              *param_1 = iVar2;
            }
            else {
              iVar2 = FUN_004c553b(*param_1,uVar5 * 4);
              *param_1 = iVar2;
            }
            param_1[1] = uVar5;
          }
        }
        iVar2 = param_1[2];
        param_1[2] = iVar2 + 1;
        *(int *)(*param_1 + iVar2 * 4) = local_18;
        LOCK();
        *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + 1;
        UNLOCK();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_14 + 0x20));
  }
  return param_1;
}


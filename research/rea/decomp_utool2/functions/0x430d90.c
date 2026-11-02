// rea decompile_all
// name: FUN_00430d90
// address: 0x430d90
// body: available
// range: 0x430d90-0x430f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00430d90(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *local_8;
  
  uVar5 = 0;
  puVar2 = *(undefined4 **)(in_ECX + 0x70c);
  *(undefined4 *)(in_ECX + 0x72c) = 0;
  *(undefined4 *)(in_ECX + 0x730) = 0;
  local_8 = puVar2;
  if (0 < *(int *)(in_ECX + 0x4c)) {
    do {
      if (((int)uVar5 <= param_1[6]) && (-1 < (int)uVar5)) {
        piVar4 = (int *)*param_1;
        if (piVar4 == (int *)0x0) {
          piVar4 = param_1 + 1;
        }
        iVar1 = (int)uVar5 >> 5;
        puVar2 = local_8;
        if ((piVar4[iVar1] & 1 << (sbyte)(uVar5 & 0x1f)) != 0) {
          if (*(int *)(in_ECX + 0x6e8) < (int)uVar5) {
            FUN_006264b0(iVar1 + 1);
            *(uint *)(in_ECX + 0x6e8) = uVar5;
          }
          iVar3 = *(int *)(in_ECX + 0x6d0);
          if (iVar3 == 0) {
            iVar3 = in_ECX + 0x6d4;
          }
          *(uint *)(iVar1 * 4 + iVar3) = *(uint *)(iVar1 * 4 + iVar3) | 1 << (uVar5 & 0x1f);
          *local_8 = 1;
          local_8[1] = uVar5;
          local_8[3] = 0;
          local_8[2] = 0;
          local_8 = local_8 + 4;
          *(int *)(in_ECX + 0x72c) = *(int *)(in_ECX + 0x72c) + 1;
          puVar2 = local_8;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(in_ECX + 0x4c));
  }
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x50)) {
    param_1 = puVar2 + 3;
    do {
      if (((int)uVar5 <= param_2[6]) && (-1 < (int)uVar5)) {
        piVar4 = (int *)*param_2;
        if (piVar4 == (int *)0x0) {
          piVar4 = param_2 + 1;
        }
        iVar1 = (int)uVar5 >> 5;
        if ((piVar4[iVar1] & 1 << (sbyte)(uVar5 & 0x1f)) != 0) {
          if (*(int *)(in_ECX + 0x6c8) < (int)uVar5) {
            FUN_006264b0(iVar1 + 1);
            *(uint *)(in_ECX + 0x6c8) = uVar5;
          }
          iVar3 = *(int *)(in_ECX + 0x6b0);
          if (iVar3 == 0) {
            iVar3 = in_ECX + 0x6b4;
          }
          *(uint *)(iVar1 * 4 + iVar3) = *(uint *)(iVar1 * 4 + iVar3) | 1 << (uVar5 & 0x1f);
          param_1[-3] = 0;
          param_1[-2] = uVar5;
          *param_1 = 0;
          param_1[-1] = 0;
          param_1 = param_1 + 4;
          *(int *)(in_ECX + 0x730) = *(int *)(in_ECX + 0x730) + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(in_ECX + 0x50));
  }
  return *(int *)(in_ECX + 0x730) + *(int *)(in_ECX + 0x72c);
}


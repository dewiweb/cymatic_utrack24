// rea decompile_all
// name: FUN_00602210
// address: 0x602210
// body: available
// range: 0x602210-0x6022f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0060228d) */

void FUN_00602210(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 in_stack_ffffffd0;
  undefined4 uVar9;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar10;
  
  if (0 < (int)param_1[2]) {
    uVar2 = *(uint *)(in_ECX + 0x10);
    iVar4 = *(int *)(in_ECX + 0x14);
    if (*(char *)(in_ECX + 0x18) != '\0') {
      uVar10 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1c);
      uVar9 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x18);
      lVar6 = __allrem(uVar2,iVar4,uVar9,uVar10);
      uVar3 = param_1[2];
      lVar7 = __allrem(uVar3 + uVar2,((int)uVar3 >> 0x1f) + iVar4 + (uint)CARRY4(uVar3,uVar2),uVar9,
                       uVar10);
      iVar4 = (int)lVar7;
      if (lVar6 < lVar7) {
        iVar4 = iVar4 - (int)lVar6;
        iVar5 = param_1[1];
        uVar8 = *param_1;
      }
      else {
        iVar5 = *(int *)(*(int *)(in_ECX + 4) + 0x18) - (int)lVar6;
        FUN_006029f0(*param_1,param_1[1],iVar5,lVar6,uVar9,uVar10);
        iVar5 = param_1[1] + iVar5;
        lVar6 = 0;
        uVar8 = *param_1;
      }
      FUN_006029f0(uVar8,iVar5,iVar4,lVar6,uVar9,uVar10);
      *(longlong *)(in_ECX + 0x10) = lVar7;
      return;
    }
    FUN_006029f0(*param_1,param_1[1],param_1[2],uVar2,iVar4,in_stack_ffffffd0,in_stack_ffffffd4);
    uVar3 = param_1[2];
    puVar1 = (uint *)(in_ECX + 0x10);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)(in_ECX + 0x14) =
         *(int *)(in_ECX + 0x14) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar2,uVar3);
  }
  return;
}


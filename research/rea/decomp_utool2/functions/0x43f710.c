// rea decompile_all
// name: FUN_0043f710
// address: 0x43f710
// body: available
// range: 0x43f710-0x43f7ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0043f710(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
            uint param_6)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  
  FUN_004364e0(param_3,param_4,param_5,&param_6,*(undefined4 *)(in_ECX + 0x18),
               *(undefined4 *)(in_ECX + 0x1c));
  piVar1 = *(int **)(in_ECX + 0x68);
  if (piVar1 != (int *)0x0) {
    uVar2 = param_6 + param_4;
    iVar3 = ((int)param_6 >> 0x1f) + param_5 + (uint)CARRY4(param_6,param_4);
    if ((iVar3 < param_5) || ((iVar3 <= param_5 && (uVar2 <= param_4)))) {
      uVar2 = param_4;
      iVar3 = param_5;
    }
    if (((*(int *)(in_ECX + 0x5c) <= param_5) &&
        (((*(int *)(in_ECX + 0x5c) < param_5 || (*(uint *)(in_ECX + 0x58) <= param_4)) &&
         (iVar3 <= *(int *)(in_ECX + 100))))) &&
       ((iVar3 < *(int *)(in_ECX + 100) || (uVar2 <= *(uint *)(in_ECX + 0x60))))) {
      FUN_0043ea90(param_1,param_3,param_2,
                   ((*(int *)(in_ECX + 0x80) * param_4 + *(int *)(in_ECX + 0x70)) - piVar1[2]) +
                   *piVar1,*(undefined4 *)(in_ECX + 0x20),param_6);
      return 1;
    }
  }
  return 0;
}


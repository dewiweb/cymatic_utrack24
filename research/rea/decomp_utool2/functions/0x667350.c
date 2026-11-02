// rea decompile_all
// name: FUN_00667350
// address: 0x667350
// body: available
// range: 0x667350-0x66742b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00667350(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int in_EDX;
  uint uVar3;
  undefined4 local_8;
  
  if (param_1 < param_3) {
    cVar2 = FUN_00667430(param_1,param_3);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    in_EDX = *(int *)(in_ECX + 8);
    param_1 = *(int *)(in_ECX + 0xc);
  }
  param_1 = param_1 - param_3;
  uVar3 = in_EDX >> ((byte)param_1 & 0x1f) & (1 << ((byte)param_3 & 0x1f)) - 1U;
  local_8 = in_EDX;
  if (*(int *)(param_2 + param_3 * 4) < (int)uVar3) {
    do {
      if (param_1 < 1) {
        cVar2 = FUN_00667430(param_1,1);
        if (cVar2 == '\0') {
          return 0xffffffff;
        }
        local_8 = *(int *)(in_ECX + 8);
        param_1 = *(int *)(in_ECX + 0xc);
      }
      param_1 = param_1 + -1;
      param_3 = param_3 + 1;
      uVar3 = uVar3 * 2 | local_8 >> ((byte)param_1 & 0x1f) & 1U;
    } while (*(int *)(param_2 + param_3 * 4) < (int)uVar3);
  }
  *(int *)(in_ECX + 8) = local_8;
  *(int *)(in_ECX + 0xc) = param_1;
  if (0x10 < param_3) {
    piVar1 = *(int **)(in_ECX + 0x10);
    *(undefined4 *)(*piVar1 + 0x14) = 0x76;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
    return 0;
  }
  return (uint)*(byte *)(*(int *)(param_2 + 0x48 + param_3 * 4) + *(int *)(param_2 + 0x8c) + 0x11 +
                        uVar3);
}


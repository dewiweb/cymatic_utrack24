// rea decompile_all
// name: FUN_0050be30
// address: 0x50be30
// body: available
// range: 0x50be30-0x50beed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050be30(undefined4 param_1,short *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int local_18;
  undefined1 local_10 [12];
  
  FUN_00521b40(&DAT_0095c848);
  if (((*(char *)(in_ECX + 0xae) == '\0') || (*param_2 != DAT_0095100c)) ||
     (param_2[1] != DAT_00951014)) {
    if (*(char *)(in_ECX + 0xaf) != '\0') {
      uVar1 = FUN_00503b30(local_10);
      iVar2 = FUN_00526ac0(uVar1);
      if (iVar2 != 0) {
        return;
      }
    }
    if (in_ECX == 0) {
      local_18 = 0;
    }
    else {
      local_18 = in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4);
    }
    FUN_00538020(1,local_18,param_1,param_2);
  }
  return;
}


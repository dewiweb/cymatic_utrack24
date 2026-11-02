// rea decompile_all
// name: FUN_00423f27
// address: 0x423f27
// body: available
// range: 0x423f27-0x423fe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423f27(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = param_2;
  puVar2 = (undefined4 *)param_2[0x85];
  if ((undefined4 *)param_2[0x85] == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_0040ffb6(&DAT_0090ed4c);
    if (puVar2 == (undefined4 *)0x0) {
      return 0xb;
    }
    param_2[0x85] = puVar2;
    param_2[0x7f] = *puVar2;
  }
  param_2 = puVar2;
  uVar3 = FUN_0040ffcd("postscript-cmaps");
  puVar1[0x86] = uVar3;
  iVar4 = FUN_00423dc5(puVar1);
  if (iVar4 == 0) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    if (param_3 < (int)puVar1[0x23]) {
      iVar4 = FUN_0041106d();
      if ((iVar4 == 0) && (iVar4 = (*(code *)param_2[0x21])(puVar1,param_1), iVar4 == 0)) {
        *puVar1 = puVar1[0x23];
        puVar1[1] = param_3;
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 6;
    }
  }
  return iVar4;
}


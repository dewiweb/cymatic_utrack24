// rea decompile_all
// name: FUN_004248e9
// address: 0x4248e9
// body: available
// range: 0x4248e9-0x42493e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004248e9(char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar1 = param_1;
  uVar3 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar3) {
    uVar4 = 0xffffffff;
    if (uVar3 != 0xffffffff) {
      uVar4 = uVar3;
    }
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        iVar2 = FUN_00425eb8(pcVar1,uVar3,&param_1);
        if ((iVar2 == 0) && (iVar2 = _strcmp(param_2,param_1), iVar2 == 0)) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  return 0;
}


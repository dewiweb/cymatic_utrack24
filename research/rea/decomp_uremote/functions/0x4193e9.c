// rea decompile_all
// name: FUN_004193e9
// address: 0x4193e9
// body: available
// range: 0x4193e9-0x41944d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_004193e9(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,char param_5)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined4 *)param_1;
  uVar5 = 0;
  FUN_00418d25(param_1);
  pcVar2 = *(char **)param_1;
  puVar1 = (undefined4 *)((int)param_1 + 8);
  if ((char *)*puVar1 <= pcVar2) {
    return 0;
  }
  param_1 = pcVar2;
  if (param_5 == '\0') {
LAB_0041941a:
    uVar4 = FUN_0041b3e1((char *)*puVar1,param_2);
    *param_4 = uVar4;
    if (param_5 != '\0') {
      if ((param_1 < (char *)puVar3[2]) && (*param_1 != '>')) goto LAB_00419411;
      param_1 = param_1 + 1;
    }
    *puVar3 = param_1;
  }
  else {
    if (*pcVar2 == '<') {
      param_1 = pcVar2 + 1;
      goto LAB_0041941a;
    }
LAB_00419411:
    uVar5 = 3;
  }
  return uVar5;
}


// rea decompile_all
// name: FUN_00415a62
// address: 0x415a62
// body: available
// range: 0x415a62-0x415b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00415a62(undefined4 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004155a9();
  if (iVar2 == 0) {
LAB_00415acc:
    pcVar1 = *(char **)(param_2 + 0xb4);
    if (((((pcVar1 != (char *)0x0) && (*(int *)(param_2 + 0xb0) != 0)) &&
         ((*pcVar1 == 'i' || (*pcVar1 == 'I')))) && ((pcVar1[1] == 's' || (pcVar1[1] == 'S')))) &&
       ((pcVar1[2] == 'o' || (pcVar1[2] == 'O')))) {
      iVar2 = _strcmp(pcVar1 + 3,"10646");
      if ((iVar2 != 0) && (iVar2 = _strcmp(pcVar1 + 3,"8859"), iVar2 == 0)) {
        _strcmp(*(char **)(param_2 + 0xb0),"1");
      }
    }
    uVar3 = FUN_0040f8e2(&DAT_008fc1e8,0,0);
  }
  else {
    FUN_00415934(param_2);
    iVar2 = FUN_00437cb6();
    if (((char)iVar2 != '\a') &&
       ((iVar2 == 0 || ((iVar2 = FUN_0043802a(), (char)iVar2 != '\a' && (iVar2 == 0)))))) {
      *(undefined4 *)(param_2 + 0xac) = param_1;
      *(int *)(param_2 + 0x68) = param_2 + 0x84;
      iVar2 = FUN_004155a9();
      if (iVar2 == 0) goto LAB_00415acc;
    }
    FUN_00415934(param_2);
    uVar3 = 2;
  }
  return uVar3;
}


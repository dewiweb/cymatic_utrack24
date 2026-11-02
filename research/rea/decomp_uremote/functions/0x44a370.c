// rea decompile_all
// name: FUN_0044a370
// address: 0x44a370
// body: available
// range: 0x44a370-0x44a470 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044a370(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    return;
  }
  if ((*(char *)(in_ECX + 0x91) == '\0') || (**(char **)(in_ECX + 0x8c) == '\0')) {
    if (-1 < *(int *)(in_ECX + 0x98)) {
      if ((((*(char *)(in_ECX + 0x90) == '\0') && (**(char **)(in_ECX + 0x8c) != '\0')) &&
          (iVar2 = FUN_0044a4ab(), iVar2 != 0)) && (*(int *)(in_ECX + 0x94) != 0x7000)) {
        FUN_0043c256(20000);
        FUN_0045e271(*(undefined4 *)(in_ECX + 0x88));
        iVar2 = *(int *)(in_ECX + 0x94);
        if (((iVar2 == 0x2000) || (iVar2 == 0x3000)) || (iVar2 == 0x4000)) {
          FUN_0045080e();
        }
        else if (iVar2 == 0x5000) {
          FUN_0044fcbf();
        }
      }
      goto LAB_0044a464;
    }
  }
  else {
    iVar2 = FUN_0044a4ab();
    if (iVar2 != 0) {
      FUN_00450bb6();
    }
  }
  *(undefined1 *)(in_ECX + 0x91) = 0;
  FUN_0047479c();
LAB_0044a464:
  FUN_004c1613(in_ECX);
  return;
}


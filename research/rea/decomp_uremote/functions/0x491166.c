// rea decompile_all
// name: FUN_00491166
// address: 0x491166
// body: available
// range: 0x491166-0x491215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00491166(char *param_1,int param_2)

{
  bool bVar1;
  uint in_EAX;
  int in_ECX;
  char *pcVar2;
  int iVar3;
  int local_8;
  
  bVar1 = false;
  iVar3 = 1;
  pcVar2 = (char *)(in_ECX + -1);
  local_8 = 0;
  *pcVar2 = '\0';
  do {
    if ((pcVar2 <= param_1) || ((in_EAX == 0 && (iVar3 <= local_8)))) {
      return pcVar2;
    }
    if (param_2 == 1) {
LAB_004911ef:
      pcVar2 = pcVar2 + -1;
      *pcVar2 = "0123456789ABCDEF"[in_EAX % 10];
LAB_00491201:
      in_EAX = in_EAX / 10;
    }
    else {
      if (param_2 == 2) {
        iVar3 = 2;
        goto LAB_004911ef;
      }
      if (param_2 != 3) {
        if (param_2 == 4) {
          iVar3 = 2;
          goto LAB_004911d9;
        }
        if (param_2 != 5) {
          in_EAX = 0;
          goto LAB_00491203;
        }
        if (bVar1) {
LAB_004911bc:
          pcVar2 = pcVar2 + -1;
          bVar1 = true;
          *pcVar2 = "0123456789ABCDEF"[in_EAX % 10];
        }
        else if (in_EAX % 10 != 0) goto LAB_004911bc;
        iVar3 = 5;
        goto LAB_00491201;
      }
LAB_004911d9:
      pcVar2 = pcVar2 + -1;
      *pcVar2 = "0123456789ABCDEF"[in_EAX & 0xf];
      in_EAX = in_EAX >> 4;
    }
LAB_00491203:
    local_8 = local_8 + 1;
  } while( true );
}


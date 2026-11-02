// rea decompile_all
// name: FUN_00432a3d
// address: 0x432a3d
// body: available
// range: 0x432a3d-0x432b51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432a3d(int param_1)

{
  char *pcVar1;
  char *in_EAX;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  int in_ECX;
  int iVar5;
  int *in_EDX;
  char *pcVar6;
  char *pcVar7;
  char *_Str;
  undefined **local_c;
  
  in_EDX[3] = 0;
  pcVar1 = in_EAX + in_ECX;
  *in_EDX = (int)in_EAX;
  in_EDX[2] = (int)pcVar1;
  while( true ) {
    *in_EDX = (int)in_EAX;
    (*(code *)in_EDX[7])();
    if ((char *)*in_EDX < pcVar1) {
      pcVar6 = (char *)*in_EDX + -0x11;
    }
    else {
      pcVar6 = pcVar1 + -0x12;
    }
    for (; in_EAX < pcVar6; in_EAX = in_EAX + 1) {
      if (((*in_EAX == '%') && (iVar5 = _strncmp(in_EAX,"%ADOBeginFontDict",0x11), iVar5 == 0)) &&
         (0 < *(int *)(param_1 + 300))) {
        in_EDX[0x18] = in_EDX[0x18] + 1;
      }
    }
    pcVar6 = (char *)*in_EDX;
    if (pcVar1 <= pcVar6) break;
    (*(code *)in_EDX[8])();
    if ((pcVar1 <= (char *)*in_EDX) || (in_EDX[3] != 0)) break;
    if ((*pcVar6 == '/') && (pcVar6 + 2 < pcVar1)) {
      pcVar7 = pcVar6 + 1;
      sVar2 = *in_EDX - (int)pcVar7;
      if (sVar2 - 1 < 0x15) {
        local_c = &PTR_s_CIDFontName_0090c6a0;
        _Str = "CIDFontName";
        do {
          if ((*pcVar7 == *_Str) && (sVar3 = _strlen(_Str), sVar2 == sVar3)) {
            iVar5 = 1;
            if (1 < (int)sVar2) {
              pcVar4 = pcVar6 + 2;
              do {
                if (*pcVar4 != pcVar4[(int)_Str - (int)pcVar7]) break;
                iVar5 = iVar5 + 1;
                pcVar4 = pcVar4 + 1;
              } while (iVar5 < (int)sVar2);
              if (iVar5 < (int)sVar2) goto LAB_00432b1f;
            }
            iVar5 = FUN_004327f0();
            in_EDX[3] = iVar5;
            if (iVar5 != 0) {
              return iVar5;
            }
            break;
          }
LAB_00432b1f:
          local_c = local_c + 9;
          _Str = *local_c;
        } while (_Str != (char *)0x0);
      }
    }
    in_EAX = (char *)*in_EDX;
  }
  return in_EDX[3];
}


// rea decompile_all
// name: FUN_00434f44
// address: 0x434f44
// body: available
// range: 0x434f44-0x4350b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00434f44(void)

{
  char *pcVar1;
  char *_Str;
  int in_EAX;
  int iVar2;
  size_t _Size;
  size_t sVar3;
  int in_ECX;
  int *in_EDX;
  char *pcVar4;
  int local_14;
  undefined **local_8;
  
  in_EDX[3] = 0;
  pcVar1 = (char *)(in_EAX + in_ECX);
  *in_EDX = in_EAX;
  in_EDX[2] = (int)pcVar1;
LAB_0043509e:
  do {
    (*(code *)in_EDX[7])();
    if (pcVar1 <= (char *)*in_EDX) goto LAB_004350ab;
    pcVar4 = (char *)*in_EDX;
    if (((*pcVar4 == 'F') && (pcVar4 + 0x19 < pcVar1)) &&
       (iVar2 = _strncmp(pcVar4,"FontDirectory",0xd), iVar2 == 0)) {
      (*(code *)in_EDX[8])();
      (*(code *)in_EDX[7])();
      local_8 = (undefined **)*in_EDX;
      pcVar4 = (char *)local_8;
      if (local_8 < pcVar1) {
        do {
          if (((*pcVar4 == 'k') && (pcVar4 + 5 < pcVar1)) &&
             (iVar2 = _strncmp(pcVar4,"known",5), iVar2 == 0)) break;
          (*(code *)in_EDX[8])();
          if (in_EDX[3] != 0) goto LAB_004350ab;
          (*(code *)in_EDX[7])();
          pcVar4 = (char *)*in_EDX;
        } while (pcVar4 < pcVar1);
        if (pcVar4 < pcVar1) {
          (*(code *)in_EDX[8])();
          (*(code *)in_EDX[0xe])();
          if (local_14 == 3) {
            local_8 = (undefined **)*in_EDX;
          }
        }
      }
      *in_EDX = (int)local_8;
      goto LAB_0043509e;
    }
    if ((*pcVar4 == '/') && (pcVar4 + 2 < pcVar1)) {
      pcVar4 = pcVar4 + 1;
      *in_EDX = (int)pcVar4;
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) goto LAB_004350ab;
      _Size = *in_EDX - (int)pcVar4;
      if ((_Size - 1 < 0x15) && ((char *)*in_EDX < pcVar1)) {
        local_8 = &PTR_s_version_0090ce18;
        do {
          _Str = *local_8;
          if ((((_Str != (char *)0x0) && (*pcVar4 == *_Str)) &&
              (sVar3 = _strlen(_Str), _Size == sVar3)) &&
             (iVar2 = _memcmp(pcVar4,_Str,_Size), iVar2 == 0)) {
            iVar2 = FUN_00434ed8();
            in_EDX[3] = iVar2;
            if (iVar2 != 0) {
              return iVar2;
            }
            break;
          }
          local_8 = local_8 + 9;
        } while ((int)local_8 < 0x90d0e8);
      }
    }
    else {
      (*(code *)in_EDX[8])();
      if (in_EDX[3] != 0) {
LAB_004350ab:
        return in_EDX[3];
      }
    }
  } while( true );
}


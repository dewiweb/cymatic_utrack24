// rea decompile_all
// name: FUN_00466e65
// address: 0x466e65
// body: available
// range: 0x466e65-0x466f41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00466e65(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  char *pcVar4;
  char *pcVar5;
  char cStack0000000b;
  
  if (param_2 != '\0') {
    if (param_3 != '\0') {
      (**(code **)(*in_ECX + 0x10))(&DAT_00917414,2);
    }
    cStack0000000b = '\0';
    do {
      iVar2 = FUN_0044eba8();
      if (iVar2 == 0) {
        return 1;
      }
      if ((iVar2 == 10) && (cStack0000000b == '\0')) {
        (**(code **)(*in_ECX + 0x1c))(0xd);
      }
      cStack0000000b = iVar2 == 0xd;
      cVar1 = (**(code **)(*in_ECX + 0x1c))(iVar2);
    } while (cVar1 != '\0');
    return 0;
  }
  puVar3 = (undefined4 *)FUN_004d076d();
  pcVar4 = (char *)*puVar3;
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    if (cVar1 == '\n') {
      if ((pcVar4 < pcVar5) &&
         (cVar1 = (**(code **)(*in_ECX + 0x10))(pcVar4,(int)pcVar5 - (int)pcVar4), cVar1 == '\0')) {
        return 0;
      }
      cVar1 = (**(code **)(*in_ECX + 0x10))(&DAT_0091722c,2);
      if (cVar1 == '\0') {
        return 0;
      }
      pcVar4 = pcVar5 + 1;
    }
    else if (cVar1 == '\r') {
      if (pcVar5[1] == '\n') {
        pcVar5 = pcVar5 + 1;
      }
    }
    else if (cVar1 == '\0') {
      if ((pcVar4 < pcVar5) &&
         (cVar1 = (**(code **)(*in_ECX + 0x10))(pcVar4,(int)pcVar5 - (int)pcVar4), cVar1 == '\0')) {
        return 0;
      }
      return 1;
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
}


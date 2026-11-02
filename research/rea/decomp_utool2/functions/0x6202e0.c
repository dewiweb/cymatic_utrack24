// rea decompile_all
// name: FUN_006202e0
// address: 0x6202e0
// body: available
// range: 0x6202e0-0x620425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006202e0(undefined4 *param_1,char param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *in_ECX;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_2 == '\0') {
    pcVar4 = (char *)*param_1;
    pcVar5 = pcVar4;
    while( true ) {
      while( true ) {
        for (; cVar1 = *pcVar5, cVar1 == '\n'; pcVar5 = pcVar5 + 1) {
          if ((pcVar4 < pcVar5) &&
             (cVar1 = (**(code **)(*in_ECX + 0x10))(pcVar4,(int)pcVar5 - (int)pcVar4), cVar1 == '\0'
             )) {
            return 0;
          }
          cVar1 = (**(code **)(*in_ECX + 0x10))(&DAT_00c010e4,2);
          if (cVar1 == '\0') {
            return 0;
          }
          pcVar4 = pcVar5 + 1;
        }
        if (cVar1 != '\r') break;
        pcVar3 = pcVar5 + 1;
        if (pcVar5[1] != '\n') {
          pcVar3 = pcVar5;
        }
        pcVar5 = pcVar3 + 1;
      }
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    }
    if ((pcVar4 < pcVar5) &&
       (cVar1 = (**(code **)(*in_ECX + 0x10))(pcVar4,(int)pcVar5 - (int)pcVar4), cVar1 == '\0')) {
      return 0;
    }
  }
  else {
    if ((char)param_3 != '\0') {
      (**(code **)(*in_ECX + 0x10))(&DAT_00c010e8,2);
    }
    bVar6 = false;
    uVar2 = FUN_00443260();
    if (uVar2 != 0) {
      while( true ) {
        if ((uVar2 == 10) && (!bVar6)) {
          if ((undefined **)*in_ECX == juce::MemoryOutputStream::vftable) {
            param_3 = 0xd;
            FUN_0062ca80(&param_3,2);
          }
          else {
            (*(code *)((undefined **)*in_ECX)[7])(0xd);
          }
        }
        bVar6 = uVar2 == 0xd;
        if ((undefined **)*in_ECX == juce::MemoryOutputStream::vftable) {
          param_3 = uVar2 & 0xffff;
          cVar1 = FUN_0062ca80(&param_3,2);
        }
        else {
          cVar1 = (*(code *)((undefined **)*in_ECX)[7])(uVar2);
        }
        if (cVar1 == '\0') break;
        uVar2 = FUN_00443260();
        if (uVar2 == 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}


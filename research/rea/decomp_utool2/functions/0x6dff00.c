// rea decompile_all
// name: FUN_006dff00
// address: 0x6dff00
// body: available
// range: 0x6dff00-0x6dffb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006dff00(undefined4 param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  byte bVar4;
  int iVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  
  bVar4 = (byte)param_1;
  if ((bVar4 != 0) && (*(code **)(*in_ECX + 0x18) != FUN_00412fc0)) {
    piStack_1c = (int *)0x6dffac;
    cVar2 = (**(code **)(*in_ECX + 0x18))();
    if (cVar2 == '\0') {
      return;
    }
  }
  if (param_2 != '\0') {
    piVar3 = in_ECX;
    if (in_ECX[2] != 0) {
      piStack_1c = (int *)0x6dff39;
      piVar3 = (int *)FUN_0068fd20();
      if (piVar3 != in_ECX) {
        piStack_1c = (int *)0x1;
        uStack_20 = 0;
        uStack_24 = 0;
        uStack_28 = 0x6dff4c;
        FUN_006dff00();
      }
    }
    iVar5 = 0;
    if (0 < piVar3[5]) {
      do {
        uStack_20 = 0x6dff5f;
        piStack_1c = in_ECX;
        FUN_006905b0();
        iVar5 = iVar5 + 1;
      } while (iVar5 < piVar3[5]);
    }
  }
  bVar1 = *(byte *)(in_ECX + 0xc);
  if (bVar4 != (bVar1 & 1)) {
    *(byte *)(in_ECX + 0xc) = (bVar1 ^ bVar4) & 1 ^ bVar1;
    if (in_ECX[1] != 0) {
      FUN_006e6400(&uStack_28);
      FUN_006ce9f0(1);
    }
    uStack_20 = 0x6dffa1;
    piStack_1c = (int *)param_1;
    (**(code **)(*in_ECX + 0x38))();
  }
  return;
}


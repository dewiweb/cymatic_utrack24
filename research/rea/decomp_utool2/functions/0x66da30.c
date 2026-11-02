// rea decompile_all
// name: FUN_0066da30
// address: 0x66da30
// body: available
// range: 0x66da30-0x66dba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066da30(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  FUN_0066e510();
  FUN_0066e4a0();
  piVar1 = (int *)in_ECX[6];
  *(undefined1 *)*piVar1 = 0x41;
  *piVar1 = *piVar1 + 1;
  piVar2 = piVar1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    cVar3 = (*(code *)piVar1[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  piVar1 = (int *)in_ECX[6];
  *(undefined1 *)*piVar1 = 100;
  *piVar1 = *piVar1 + 1;
  piVar2 = piVar1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    cVar3 = (*(code *)piVar1[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  piVar1 = (int *)in_ECX[6];
  *(undefined1 *)*piVar1 = 0x6f;
  *piVar1 = *piVar1 + 1;
  piVar2 = piVar1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    cVar3 = (*(code *)piVar1[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  piVar1 = (int *)in_ECX[6];
  *(undefined1 *)*piVar1 = 0x62;
  *piVar1 = *piVar1 + 1;
  piVar2 = piVar1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    cVar3 = (*(code *)piVar1[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  piVar1 = (int *)in_ECX[6];
  *(undefined1 *)*piVar1 = 0x65;
  *piVar1 = *piVar1 + 1;
  piVar2 = piVar1 + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    cVar3 = (*(code *)piVar1[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  FUN_0066e4a0();
  FUN_0066e4a0();
  FUN_0066e4a0();
  piVar2 = (int *)in_ECX[6];
  if (in_ECX[0x10] == 3) {
    *(undefined1 *)*piVar2 = 1;
  }
  else if (in_ECX[0x10] == 5) {
    *(undefined1 *)*piVar2 = 2;
  }
  else {
    *(undefined1 *)*piVar2 = 0;
  }
  *piVar2 = *piVar2 + 1;
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    cVar3 = (*(code *)piVar2[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
  }
  return;
}


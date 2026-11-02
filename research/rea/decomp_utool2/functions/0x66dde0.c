// rea decompile_all
// name: FUN_0066dde0
// address: 0x66dde0
// body: available
// range: 0x66dde0-0x66dfaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066dde0(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  int *in_ECX;
  int iVar8;
  
  FUN_0066e510();
  FUN_0066e4a0();
  piVar1 = (int *)in_ECX[6];
  *(char *)*piVar1 = (char)in_ECX[0x39];
  *piVar1 = *piVar1 + 1;
  piVar7 = piVar1 + 1;
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (cVar5 = (*(code *)piVar1[3])(), cVar5 == '\0')) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x18;
    (**(code **)*in_ECX)();
  }
  iVar8 = 0;
  if (0 < in_ECX[0x39]) {
    piVar7 = in_ECX + 0x3a;
    do {
      piVar2 = (int *)in_ECX[6];
      puVar3 = (undefined1 *)*piVar7;
      *(undefined1 *)*piVar2 = *puVar3;
      *piVar2 = *piVar2 + 1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (cVar5 = (*(code *)piVar2[3])(), cVar5 == '\0')) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x18;
        (**(code **)*in_ECX)();
      }
      cVar5 = (char)*(undefined4 *)(puVar3 + 0x14);
      cVar6 = (char)*(undefined4 *)(puVar3 + 0x18);
      if ((char)in_ECX[0x35] != '\0') {
        cVar4 = cVar6;
        if (in_ECX[0x4b] == 0) {
          cVar6 = '\0';
          if ((in_ECX[0x4d] == 0) || (cVar4 = '\0', *(char *)((int)in_ECX + 0xb1) != '\0'))
          goto LAB_0066deb2;
        }
        cVar6 = cVar4;
        cVar5 = '\0';
      }
LAB_0066deb2:
      piVar2 = (int *)in_ECX[6];
      *(char *)*piVar2 = cVar5 * '\x10' + cVar6;
      *piVar2 = *piVar2 + 1;
      piVar1 = piVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (cVar5 = (*(code *)piVar2[3])(), cVar5 == '\0')) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x18;
        (**(code **)*in_ECX)();
      }
      iVar8 = iVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar8 < in_ECX[0x39]);
  }
  piVar1 = (int *)in_ECX[6];
  *(char *)*piVar1 = (char)in_ECX[0x4b];
  *piVar1 = *piVar1 + 1;
  piVar7 = piVar1 + 1;
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (cVar5 = (*(code *)piVar1[3])(), cVar5 == '\0')) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x18;
    (**(code **)*in_ECX)();
  }
  piVar1 = (int *)in_ECX[6];
  *(char *)*piVar1 = (char)in_ECX[0x4c];
  *piVar1 = *piVar1 + 1;
  piVar7 = piVar1 + 1;
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (cVar5 = (*(code *)piVar1[3])(), cVar5 == '\0')) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x18;
    (**(code **)*in_ECX)();
  }
  piVar1 = (int *)in_ECX[6];
  *(char *)*piVar1 = (char)in_ECX[0x4d] * '\x10' + (char)in_ECX[0x4e];
  *piVar1 = *piVar1 + 1;
  piVar7 = piVar1 + 1;
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (cVar5 = (*(code *)piVar1[3])(), cVar5 == '\0')) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x18;
    (**(code **)*in_ECX)();
  }
  return;
}


// rea decompile_all
// name: FUN_0066e2d0
// address: 0x66e2d0
// body: available
// range: 0x66e2d0-0x66e497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0066e2d0(void)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  ushort *puVar6;
  int *in_ECX;
  int iVar7;
  int in_EDX;
  char cVar8;
  int *piVar9;
  char local_10;
  
  iVar2 = in_ECX[in_EDX + 0x12];
  if (iVar2 == 0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x34;
    *(int *)(*in_ECX + 0x18) = in_EDX;
    (**(code **)*in_ECX)();
  }
  cVar8 = '\0';
  iVar7 = 0x10;
  puVar6 = (ushort *)(iVar2 + 4);
  do {
    if (0xff < puVar6[-2]) {
      cVar8 = '\x01';
    }
    if (0xff < puVar6[-1]) {
      cVar8 = '\x01';
    }
    if (0xff < *puVar6) {
      cVar8 = '\x01';
    }
    if (0xff < puVar6[1]) {
      cVar8 = '\x01';
    }
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 4;
  } while (iVar7 != 0);
  if (*(char *)(iVar2 + 0x80) == '\0') {
    piVar3 = (int *)in_ECX[6];
    *(undefined1 *)*piVar3 = 0xff;
    *piVar3 = *piVar3 + 1;
    piVar9 = piVar3 + 1;
    *piVar9 = *piVar9 + -1;
    if ((*piVar9 == 0) && (cVar5 = (*(code *)piVar3[3])(), cVar5 == '\0')) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
    piVar3 = (int *)in_ECX[6];
    *(undefined1 *)*piVar3 = 0xdb;
    *piVar3 = *piVar3 + 1;
    piVar9 = piVar3 + 1;
    *piVar9 = *piVar9 + -1;
    if ((*piVar9 == 0) && (cVar5 = (*(code *)piVar3[3])(), cVar5 == '\0')) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
    FUN_0066e4a0();
    piVar3 = (int *)in_ECX[6];
    local_10 = (char)in_EDX;
    *(char *)*piVar3 = cVar8 * '\x10' + local_10;
    *piVar3 = *piVar3 + 1;
    piVar9 = piVar3 + 1;
    *piVar9 = *piVar9 + -1;
    if ((*piVar9 == 0) && (cVar5 = (*(code *)piVar3[3])(), cVar5 == '\0')) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x18;
      (**(code **)*in_ECX)();
    }
    piVar9 = &DAT_00c02140;
    do {
      uVar1 = *(undefined2 *)(iVar2 + *piVar9 * 2);
      if (cVar8 != '\0') {
        piVar4 = (int *)in_ECX[6];
        *(char *)*piVar4 = (char)((ushort)uVar1 >> 8);
        *piVar4 = *piVar4 + 1;
        piVar3 = piVar4 + 1;
        *piVar3 = *piVar3 + -1;
        if ((*piVar3 == 0) && (cVar5 = (*(code *)piVar4[3])(), cVar5 == '\0')) {
          *(undefined4 *)(*in_ECX + 0x14) = 0x18;
          (**(code **)*in_ECX)();
        }
      }
      piVar4 = (int *)in_ECX[6];
      *(char *)*piVar4 = (char)uVar1;
      *piVar4 = *piVar4 + 1;
      piVar3 = piVar4 + 1;
      *piVar3 = *piVar3 + -1;
      if ((*piVar3 == 0) && (cVar5 = (*(code *)piVar4[3])(), cVar5 == '\0')) {
        *(undefined4 *)(*in_ECX + 0x14) = 0x18;
        (**(code **)*in_ECX)();
      }
      piVar9 = piVar9 + 1;
    } while ((int)piVar9 < 0xc02240);
    *(undefined1 *)(iVar2 + 0x80) = 1;
  }
  return cVar8;
}


// rea decompile_all
// name: FUN_00671990
// address: 0x671990
// body: available
// range: 0x671990-0x671ad5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00671990(void)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int *in_ECX;
  uint uVar4;
  
  iVar1 = in_ECX[5];
  if ((iVar1 == 0x65) || (iVar1 == 0x66)) {
    if ((uint)in_ECX[0x34] < (uint)in_ECX[8]) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x43;
      (**(code **)*in_ECX)();
    }
    pcVar3 = *(code **)(in_ECX[0x4f] + 8);
  }
  else {
    if (iVar1 == 0x67) goto LAB_006719e9;
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    pcVar3 = *(code **)*in_ECX;
  }
  (*pcVar3)();
LAB_006719e9:
  cVar2 = *(char *)(in_ECX[0x4f] + 0xd);
  while (cVar2 == '\0') {
    (**(code **)in_ECX[0x4f])();
    uVar4 = 0;
    if (in_ECX[0x38] != 0) {
      do {
        if (in_ECX[2] != 0) {
          *(uint *)(in_ECX[2] + 4) = uVar4;
          *(int *)(in_ECX[2] + 8) = in_ECX[0x38];
          (**(code **)in_ECX[2])();
        }
        cVar2 = (**(code **)(in_ECX[0x52] + 4))();
        if (cVar2 == '\0') {
          *(undefined4 *)(*in_ECX + 0x14) = 0x18;
          (**(code **)*in_ECX)();
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)in_ECX[0x38]);
    }
    (**(code **)(in_ECX[0x4f] + 8))();
    cVar2 = *(char *)(in_ECX[0x4f] + 0xd);
  }
  (**(code **)(in_ECX[0x53] + 0xc))();
  (**(code **)(in_ECX[6] + 0x10))();
  if (in_ECX[1] != 0) {
    (**(code **)(in_ECX[1] + 0x24))();
    if ((char)in_ECX[4] != '\0') {
      in_ECX[5] = 200;
      in_ECX[0x43] = 0;
      return;
    }
    in_ECX[5] = 100;
  }
  return;
}


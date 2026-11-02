// rea decompile_all
// name: FUN_006706b0
// address: 0x6706b0
// body: available
// range: 0x6706b0-0x6708a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006706b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  puVar2 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x54] = (int)puVar2;
  *puVar2 = &DAT_006708d0;
  switch(in_ECX[10]) {
  case 1:
    if (in_ECX[9] != 1) {
LAB_006706ff:
      *(undefined4 *)(*in_ECX + 0x14) = 9;
      (**(code **)*in_ECX)();
    }
    break;
  case 2:
  case 3:
    if (in_ECX[9] != 3) goto LAB_006706ff;
    break;
  case 4:
  case 5:
    if (in_ECX[9] != 4) goto LAB_006706ff;
    break;
  default:
    if (in_ECX[9] < 1) goto LAB_006706ff;
  }
  switch(in_ECX[0x10]) {
  case 1:
    if (in_ECX[0xf] != 1) {
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    iVar1 = in_ECX[10];
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *puVar2 = &LAB_00670d00;
        puVar2[1] = FUN_00670b40;
        return;
      }
      if (iVar1 != 3) goto LAB_00670790;
    }
    puVar2[1] = FUN_00670980;
    return;
  case 2:
    if (in_ECX[0xf] != 3) {
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    if (in_ECX[10] != 2) {
LAB_00670790:
      *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
      (**(code **)*in_ECX)();
      return;
    }
    break;
  case 3:
    if (in_ECX[0xf] != 3) {
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    if (in_ECX[10] == 2) {
      *puVar2 = &LAB_00670d00;
      puVar2[1] = FUN_00670bf0;
      return;
    }
    if (in_ECX[10] != 3) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
      (**(code **)*in_ECX)();
      return;
    }
    break;
  case 4:
    if (in_ECX[0xf] != 4) {
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    if (in_ECX[10] != 4) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
      (**(code **)*in_ECX)();
      return;
    }
    break;
  case 5:
    if (in_ECX[0xf] != 4) {
      *(undefined4 *)(*in_ECX + 0x14) = 10;
      (**(code **)*in_ECX)();
    }
    if (in_ECX[10] == 4) {
      *puVar2 = &LAB_00670d00;
      puVar2[1] = FUN_00670a00;
      return;
    }
    if (in_ECX[10] != 5) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
      (**(code **)*in_ECX)();
      return;
    }
    break;
  default:
    if ((in_ECX[0x10] != in_ECX[10]) || (in_ECX[0xf] != in_ECX[9])) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1b;
      (**(code **)*in_ECX)();
    }
  }
  puVar2[1] = FUN_006708e0;
  return;
}


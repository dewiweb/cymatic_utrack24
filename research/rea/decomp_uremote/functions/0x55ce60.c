// rea decompile_all
// name: FUN_0055ce60
// address: 0x55ce60
// body: available
// range: 0x55ce60-0x55d08c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ce60(ushort param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  switch(*(undefined1 *)(param_2 + 0x78)) {
  case 0x44:
    FUN_00522460(param_2);
    break;
  default:
    if ((*(byte *)(param_2 + 0x74) >> 1 & 1) == 0) {
      if (param_1 < 0x8000) {
        iVar2 = FUN_00579ad0(param_1);
        if (iVar2 != 0) {
          FUN_00576010(param_2);
        }
      }
      else {
        iVar2 = FUN_00570dc0(param_1);
        if (iVar2 != 0) {
          FUN_00573420(param_2);
        }
      }
    }
    else if (param_1 < 0x4000) {
      piVar1 = (int *)FUN_0056a030(param_1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(param_2);
      }
    }
    else if (param_1 < 0x8000) {
      piVar1 = (int *)FUN_0056a030(param_1);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(param_2);
      }
    }
    else {
      iVar2 = FUN_00570dc0(param_1);
      if (iVar2 != 0) {
        FUN_00573420(param_2);
      }
    }
    break;
  case 0x50:
    FUN_00515c40(in_ECX,param_1,param_2);
    break;
  case 0x60:
    FUN_0058ee80(param_2);
    break;
  case 0x61:
    FUN_0058edc0(param_2);
  }
  FUN_00522020(param_2,in_ECX + 0x48);
  return;
}


// rea decompile_all
// name: FUN_00412dd8
// address: 0x412dd8
// body: available
// range: 0x412dd8-0x412e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00412dd8(int param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  undefined *puVar2;
  
  if (param_1 == 0) {
    return 0x25;
  }
  if (param_2 == (int *)0x0) {
    iVar1 = 6;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0x62697473) {
      puVar2 = &DAT_008fb57c;
    }
    else if (iVar1 == 0x6f75746c) {
      puVar2 = &DAT_008fb59c;
    }
    else {
      iVar1 = FUN_0040fb2d(iVar1);
      if ((iVar1 == 0) || (puVar2 = (undefined *)(iVar1 + 0x14), puVar2 == (undefined *)0x0)) {
        return 0x12;
      }
    }
    iVar1 = FUN_00412daa();
    if (iVar1 == 0) {
      *(int *)(in_ECX + 0xc) = *(int *)(param_1 + 0x40) << 10;
      *(int *)(in_ECX + 0x10) = *(int *)(param_1 + 0x44) << 10;
      iVar1 = (**(code **)(puVar2 + 8))(in_ECX,param_1);
      if (iVar1 == 0) {
        *param_2 = in_ECX;
      }
      else {
        FUN_00412e78();
      }
    }
  }
  return iVar1;
}


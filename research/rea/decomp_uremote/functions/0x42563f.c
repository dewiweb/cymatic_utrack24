// rea decompile_all
// name: FUN_0042563f
// address: 0x42563f
// body: available
// range: 0x42563f-0x425719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042563f(int *param_1,int param_2,int param_3,int param_4,short param_5)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  byte *unaff_EBX;
  undefined4 local_8;
  
  if ((((param_2 < 0) || (bVar1 = unaff_EBX[1], param_1[1] < (int)((uint)bVar1 + param_2))) ||
      (param_3 < 0)) || (*param_1 < (int)(param_3 + (uint)*unaff_EBX))) {
    return 6;
  }
  local_8 = 0;
  if (param_5 != 1) {
    if ((param_5 == 2) || (param_5 == 5)) goto LAB_004256dc;
    if (param_5 != 6) {
      if (param_5 != 7) {
        return 3;
      }
      goto LAB_004256dc;
    }
  }
  local_8 = 1;
LAB_004256dc:
  iVar2 = FUN_004111b5();
  if (iVar2 == 0) {
    FUN_00424be3(*(undefined4 *)(in_EAX + 0x20),(uint)bVar1 * param_4,local_8,param_3);
    FUN_00411249();
  }
  return iVar2;
}


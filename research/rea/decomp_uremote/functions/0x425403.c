// rea decompile_all
// name: FUN_00425403
// address: 0x425403
// body: available
// range: 0x425403-0x4254b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00425403(undefined4 param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_c;
  undefined1 local_8;
  
  uVar1 = *(ushort *)(param_2 + 6);
  iVar2 = 0;
  if (uVar1 != 0) {
    if (uVar1 < 3) {
LAB_00425445:
      iVar2 = FUN_00411560(param_1,&local_c);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined1 *)param_3 = (undefined1)local_c;
      *(undefined1 *)((int)param_3 + 1) = local_c._1_1_;
      *(undefined1 *)((int)param_3 + 2) = local_c._2_1_;
      *(undefined1 *)((int)param_3 + 3) = local_c._3_1_;
      *(undefined1 *)(param_3 + 1) = local_8;
      *(undefined1 *)((int)param_3 + 5) = 0;
      *(undefined1 *)((int)param_3 + 6) = 0;
      *(undefined1 *)((int)param_3 + 7) = 0;
      return 0;
    }
    if (5 < uVar1) {
      if (7 < uVar1) {
        if (uVar1 == 8) goto LAB_00425445;
        if (uVar1 != 9) goto LAB_0042548c;
      }
      iVar2 = FUN_00411560(param_1,param_3);
      return iVar2;
    }
  }
LAB_0042548c:
  if ((*(short *)(param_2 + 4) == 2) || (*(short *)(param_2 + 4) == 5)) {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    param_3[1] = *(undefined4 *)(param_2 + 0x14);
  }
  else {
    iVar2 = 3;
  }
  return iVar2;
}


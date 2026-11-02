// rea decompile_all
// name: FUN_00428277
// address: 0x428277
// body: available
// range: 0x428277-0x42832e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00428277(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int unaff_ESI;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x214) + 0x68))
                    (iVar1,*(undefined4 *)(param_1 + 0x70),param_2,param_3,
                     *(undefined4 *)(iVar1 + 0x68),unaff_ESI + 0x4c,&local_c);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_ESI + 0x6e) = 0;
    *(undefined2 *)(unaff_ESI + 0x6c) = 0;
    *(uint *)(unaff_ESI + 0x18) = (local_c >> 8 & 0xff) << 6;
    *(uint *)(unaff_ESI + 0x1c) = (local_c & 0xff) << 6;
    *(int *)(unaff_ESI + 0x20) = (int)local_c._2_1_ << 6;
    *(int *)(unaff_ESI + 0x24) = (int)local_c._3_1_ << 6;
    *(uint *)(unaff_ESI + 0x28) = (local_8 & 0xff) << 6;
    *(int *)(unaff_ESI + 0x2c) = (int)local_8._1_1_ << 6;
    *(int *)(unaff_ESI + 0x30) = (int)local_8._2_1_ << 6;
    *(uint *)(unaff_ESI + 0x34) = (local_8 >> 0x18) << 6;
    *(undefined4 *)(unaff_ESI + 0x48) = 0x62697473;
    if ((param_3 & 0x10) == 0) {
      *(int *)(unaff_ESI + 100) = (int)local_c._2_1_;
      *(int *)(unaff_ESI + 0x68) = (int)local_c._3_1_;
    }
    else {
      *(int *)(unaff_ESI + 100) = (int)local_8._1_1_;
      *(int *)(unaff_ESI + 0x68) = (int)local_8._2_1_;
    }
  }
  return iVar1;
}


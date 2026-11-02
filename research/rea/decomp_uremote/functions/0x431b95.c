// rea decompile_all
// name: FUN_00431b95
// address: 0x431b95
// body: available
// range: 0x431b95-0x431c78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00431b95(int param_1,int param_2,uint param_3,byte param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 local_5e0 [68];
  undefined1 local_59c;
  undefined1 local_59a;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_4 & 0x10) == 0) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x1e8) + 0xc))
                      (local_5e0,param_1,0,0,*(undefined4 *)(param_1 + 0x1a4),
                       *(undefined4 *)(param_1 + 0x214),0,0,FUN_00431a77);
    if (iVar1 == 0) {
      local_8c = *(undefined4 *)(param_1 + 0x194);
      local_88 = *(undefined4 *)(param_1 + 0x198);
      local_84 = *(undefined4 *)(param_1 + 0x19c);
      local_10 = *(undefined4 *)(param_1 + 0x224);
      local_c = *(undefined4 *)(param_1 + 0x220);
      uVar2 = 0;
      local_59a = 1;
      local_59c = 0;
      if (param_3 != 0) {
        do {
          iVar1 = FUN_00431a77(local_5e0,param_2 + uVar2);
          if (iVar1 == 0) {
            iVar1 = FUN_0040d211();
            param_5[uVar2] = iVar1 >> 0x10;
          }
          else {
            param_5[uVar2] = 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_3);
      }
      iVar1 = 0;
    }
  }
  else {
    if (param_3 != 0) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *param_5 = 0;
        param_5 = param_5 + 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


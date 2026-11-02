// rea decompile_all
// name: FUN_00432fbb
// address: 0x432fbb
// body: available
// range: 0x432fbb-0x4330cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00432fbb(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_74;
  undefined1 local_70 [84];
  undefined4 local_1c;
  int local_18;
  
  FUN_00432e55(local_70);
  local_74 = FUN_00432516(*(undefined4 *)(param_1 + 100));
  if (local_74 == 0) {
    local_74 = FUN_00432a3d(param_1);
    if ((local_74 == 0) && (-1 < param_2)) {
      puVar1 = (undefined4 *)FUN_00411912(0x28,&local_74);
      *(undefined4 **)(param_1 + 0x148) = puVar1;
      if (local_74 == 0) {
        if (local_18 == 0) {
          puVar4 = *(undefined4 **)(param_1 + 0x68);
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar1 = puVar1 + 1;
          }
          *(undefined4 *)(param_1 + 0x134) = local_1c;
        }
        else {
          uVar2 = FUN_00411912(local_18,&local_74);
          *(undefined4 *)(param_1 + 0x144) = uVar2;
          if (local_74 != 0) goto LAB_004330bc;
          iVar3 = FUN_00432e6b(local_18,param_1);
          if (iVar3 != 0) goto LAB_004330bc;
          FUN_00411045(local_18);
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        local_74 = FUN_00432b52(param_1);
      }
    }
  }
LAB_004330bc:
  thunk_FUN_004327b7();
  return local_74;
}


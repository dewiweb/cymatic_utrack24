// rea decompile_all
// name: FUN_00470e88
// address: 0x470e88
// body: available
// range: 0x470e88-0x470f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00470e88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int *local_30 [5];
  undefined1 *local_1c;
  int *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x470e94;
  local_14[0] = in_ECX[2];
  iVar3 = 0;
  local_18 = (int *)0x0;
  if (0 < local_14[0]) {
    do {
      iVar2 = *in_ECX;
      local_18 = (int *)local_30;
      local_30[0] = (int *)*param_2;
      iVar1 = FUN_0046738b();
      local_30[0] = (int *)(iVar2 + iVar3 * 4);
      if (iVar1 == 0) goto LAB_00470f33;
      iVar2 = (local_14[0] + iVar3) / 2;
      if (iVar2 == iVar3) {
        if (0 < iVar1) {
          iVar3 = iVar3 + 1;
        }
        break;
      }
      local_30[0] = (int *)*param_2;
      local_18 = (int *)(*in_ECX + iVar2 * 4);
      local_1c = (undefined1 *)local_30;
      iVar1 = FUN_0046738b();
      if (iVar1 == 0) {
        local_30[0] = local_18;
        goto LAB_00470f33;
      }
      if (0 < iVar1) {
        iVar3 = iVar2;
        iVar2 = local_14[0];
      }
      local_14[0] = iVar2;
    } while (iVar3 < local_14[0]);
  }
  local_1c = (undefined1 *)local_30;
  local_30[0] = (int *)*param_2;
  FUN_004653c3();
  local_8 = 0;
  local_30[0] = local_14;
  FUN_0046e2e9();
  local_30[0] = (int *)0x470f2d;
  FUN_004652d6();
  local_30[0] = (int *)(*in_ECX + iVar3 * 4);
LAB_00470f33:
  FUN_004652e4();
  return param_1;
}


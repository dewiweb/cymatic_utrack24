// rea decompile_all
// name: FUN_0047d668
// address: 0x47d668
// body: available
// range: 0x47d668-0x47d80d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047d668(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int iVar5;
  int iVar6;
  int *piStack_a0;
  int *piStack_9c;
  undefined1 *puStack_98;
  int *piStack_94;
  undefined1 local_5c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x47d674;
  piStack_94 = (int *)0x47d680;
  (**(code **)(*(int *)*param_1 + 0x34))();
  piStack_94 = (int *)0x47d68b;
  cVar2 = FUN_004733bd();
  if (cVar2 == '\0') {
    piStack_94 = &local_3c;
    puStack_98 = local_5c;
    piStack_9c = (int *)0x47d6db;
    (**(code **)(*(int *)*param_1 + 0x2c))();
    FUN_004a4c72();
    if ((0 < local_34) && (0 < local_30)) {
      piStack_a0 = &local_3c;
      (**(code **)(*(int *)*param_1 + 0x14))();
      iVar1 = *in_ECX;
      uVar3 = (local_3c - iVar1) / param_2;
      local_18 = 0;
      uVar4 = (local_38 - in_ECX[1]) / param_3;
      local_28 = local_34 + local_3c;
      local_2c = local_30 + local_38;
      iVar6 = uVar4 * param_3 + in_ECX[1];
      local_1c = (uVar4 ^ uVar3) & 1;
      do {
        piStack_a0 = (int *)&stack0x00000010;
        if (local_18 != local_1c) {
          piStack_a0 = (int *)&stack0x00000014;
        }
        local_24 = (undefined1 *)&piStack_a0;
        FUN_004d076d();
        FUN_00476c68();
        local_8 = 1;
        piStack_a0 = extraout_EDX_00;
        (**(code **)(*(int *)*param_1 + 0x44))();
        local_8 = 0xffffffff;
        FUN_00476da0();
        local_20 = local_18;
        local_24 = (undefined1 *)iVar6;
        if (iVar6 < local_2c) {
          do {
            uVar4 = local_20 & 1;
            local_20 = local_20 + 1;
            for (iVar5 = uVar4 * param_2 + uVar3 * param_2 + iVar1; iVar5 < local_28;
                iVar5 = iVar5 + param_2 * 2) {
              local_48 = (int)local_24;
              local_44 = param_2;
              local_40 = param_3;
              piStack_a0 = (int *)0x0;
              local_4c = iVar5;
              (**(code **)(*(int *)*param_1 + 0x54))(&local_4c);
            }
            local_24 = (undefined1 *)((int)local_24 + param_3);
          } while ((int)local_24 < local_2c);
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < 2);
    }
  }
  else {
    puStack_98 = (undefined1 *)0x47d69d;
    FUN_004d076d();
    puStack_98 = (undefined1 *)0x47d6a5;
    FUN_00476c68();
    local_8 = 0;
    puStack_98 = (undefined1 *)0x47d6b1;
    piStack_94 = extraout_EDX;
    (**(code **)(*(int *)*param_1 + 0x44))();
    local_8 = 0xffffffff;
    puStack_98 = (undefined1 *)0x47d6bd;
    FUN_00476da0();
    puStack_98 = (undefined1 *)0x0;
    piStack_a0 = (int *)0x47d6c7;
    piStack_9c = in_ECX;
    (**(code **)(*(int *)*param_1 + 0x54))();
  }
  piStack_a0 = (int *)0x47d806;
  (**(code **)(*(int *)*param_1 + 0x38))();
  return;
}


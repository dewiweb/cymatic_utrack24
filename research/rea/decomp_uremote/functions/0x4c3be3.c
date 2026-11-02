// rea decompile_all
// name: FUN_004c3be3
// address: 0x4c3be3
// body: available
// range: 0x4c3be3-0x4c3d7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */

void FUN_004c3be3(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *in_ECX;
  int extraout_ECX;
  int iVar2;
  int local_44;
  int local_40;
  int local_3c [7];
  undefined1 *local_20;
  int *local_18;
  int *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4c3bef;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    local_14 = (int *)0x0;
  }
  else {
    local_14 = *(int **)(iVar2 + 8);
  }
  if (in_ECX != local_14) {
    local_3c[2] = 0x4c3c1a;
    FUN_004f5fb6();
    local_8 = 0;
    local_3c[2] = 0x4c3c2c;
    FUN_004d076d();
    if (local_14 != (int *)0x0) {
      local_3c[2] = 0x4c3c3f;
      FUN_004f5fb6();
      local_14 = local_3c + 2;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_3c[1] = 0x4c3c4e;
      FUN_004c6ae2();
      local_14 = local_3c;
      local_40 = 0x4c3c5d;
      local_3c[0] = extraout_ECX;
      FUN_00467e6f();
      local_14 = &local_44;
      local_44 = param_2;
      local_40 = param_3;
      FUN_004c3a0a();
      local_3c[2] = 0;
      local_3c[1] = 0x4c3c82;
      cVar1 = FUN_004f5fe9();
      if (cVar1 != '\0') {
        local_3c[2] = 0x4c3c90;
        FUN_004a4d78();
        local_14 = local_3c + 1;
        local_3c[0] = 0x4c3c9f;
        FUN_00467e6f();
        local_14 = &local_40;
        local_40 = param_2;
        local_3c[0] = param_3;
        if (local_18 == (int *)0x0) {
          local_44 = 0;
        }
        else {
          local_44 = *(int *)((int)local_18 + 8);
        }
        FUN_004c3745(param_1);
      }
      local_14 = local_3c + 2;
      local_3c[1] = 0x4c3cd4;
      FUN_004d076d();
      local_3c[1] = 0x4c3cdc;
      FUN_00476147();
      local_8 = local_8 & 0xffffff00;
      local_3c[2] = 0x4c3ce8;
      FUN_00474d0f();
    }
    local_3c[2] = 0x4c3cf2;
    FUN_004a4d78();
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 8);
    }
    if (iVar2 != 0) {
      local_18 = local_3c + 1;
      local_3c[0] = 0x4c3d12;
      FUN_00467e6f();
      local_18 = &local_40;
      local_40 = param_2;
      local_3c[0] = param_3;
      local_44 = iVar2;
      FUN_004c36e3(param_1);
    }
    local_3c[2] = 0;
    local_3c[1] = 0x4c3d37;
    FUN_004c4669();
    local_18 = local_3c + 2;
    local_3c[1] = 0x4c3d45;
    FUN_004d076d();
    local_20 = (undefined1 *)local_3c;
    local_40 = 0x4c3d54;
    FUN_00467e6f();
    local_20 = (undefined1 *)&local_44;
    local_44 = param_2;
    local_40 = param_3;
    FUN_004c3a0a();
    local_3c[2] = 0x4c3d76;
    FUN_00474d0f();
  }
  return;
}


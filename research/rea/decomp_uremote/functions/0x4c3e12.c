// rea decompile_all
// name: FUN_004c3e12
// address: 0x4c3e12
// body: available
// range: 0x4c3e12-0x4c3f5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c3e12(char param_1,float param_2,float param_3)

{
  char cVar1;
  float in_ECX;
  float fVar2;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_1c;
  undefined1 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x4c3e1e;
  if ((*(byte *)((int)in_ECX + 0x20) & 0x70) == 0) {
    local_18 = (undefined1 *)&local_38;
    local_3c = 7.001813e-39;
    FUN_00467e6f();
    local_8 = 0;
    local_40 = param_2;
    local_3c = param_3;
    local_18 = (undefined1 *)&local_48;
    local_48 = param_2;
    local_44 = param_3;
    FUN_004c35c7();
    local_8 = 0xffffffff;
    local_48 = 7.001896e-39;
    local_44 = in_ECX;
    FUN_004c3be3();
  }
  local_38 = *(float *)((int)in_ECX + 0x10);
  local_18 = (undefined1 *)&local_38;
  local_34 = *(float *)((int)in_ECX + 0x14);
  local_3c = 7.001932e-39;
  cVar1 = FUN_004f5a31();
  if ((cVar1 != '\0') || (param_1 != '\0')) {
    local_34 = 7.00196e-39;
    FUN_00474368();
    *(float *)((int)in_ECX + 0x10) = param_2;
    *(float *)((int)in_ECX + 0x14) = param_3;
    if (*(int *)((int)in_ECX + 0x28) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = *(float *)(*(int *)((int)in_ECX + 0x28) + 8);
    }
    if (fVar2 != 0.0) {
      local_44 = fVar2;
      if ((*(byte *)((int)in_ECX + 0x20) & 0x70) == 0) {
        local_3c = 7.002172e-39;
        FUN_00467e6f();
        local_40 = param_2;
        local_3c = param_3;
        local_48 = in_ECX;
        FUN_004c37a7();
      }
      else {
        local_38 = param_2;
        local_34 = param_3;
        local_3c = 7.002049e-39;
        FUN_004c486b();
        local_3c = 7.00207e-39;
        FUN_00467e6f();
        local_1c = *(float *)((int)in_ECX + 0x18);
        local_18 = *(undefined1 **)((int)in_ECX + 0x1c);
        local_3c = (float)local_18 + param_3;
        local_40 = local_1c + param_2;
        local_48 = in_ECX;
        FUN_004c3869();
        if (*(char *)((int)in_ECX + 0x24) != '\0') {
          local_38 = 7.002158e-39;
          local_34 = fVar2;
          FUN_004c443f();
        }
      }
    }
    local_34 = 0.0;
    local_38 = 7.00222e-39;
    FUN_004c4669();
  }
  return;
}


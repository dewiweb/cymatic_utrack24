// rea decompile_all
// name: FUN_0047a633
// address: 0x47a633
// body: available
// range: 0x47a633-0x47a836 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a633(float param_1,float param_2,float param_3,float param_4,char param_5,uint param_6)

{
  char cVar1;
  undefined4 unaff_ESI;
  float *pfVar2;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20 [7];
  
  FUN_00478ad2();
  if (param_5 == '\0') {
    pfVar2 = local_20;
    local_48 = param_4 / local_2c;
    local_44 = param_3 / local_30;
    local_34 = -local_34;
    local_38 = -local_38;
    local_3c = param_1;
  }
  else {
    if (((param_3 <= 0.0) || (param_4 <= 0.0)) || (cVar1 = FUN_004a4daa(), cVar1 != '\0')) {
      FUN_00476f96();
      return;
    }
    local_48 = local_2c / local_30;
    if (local_48 <= param_4 / param_3) {
      local_44 = param_3;
      local_48 = param_3 * local_48;
    }
    else {
      local_44 = param_4 / local_48;
      local_48 = param_4;
    }
    if ((param_6 & 1) == 0) {
      if ((param_6 >> 1 & 1) == 0) {
        param_3 = param_3 * 0.5;
      }
      else {
        param_3 = param_3 - local_44 * 0.5;
      }
    }
    else {
      param_3 = local_44 * 0.5;
    }
    local_3c = param_1 + param_3;
    if ((param_6 >> 3 & 1) == 0) {
      if ((param_6 >> 4 & 1) == 0) {
        param_4 = param_4 * 0.5;
      }
      else {
        param_4 = param_4 - local_48 * 0.5;
      }
    }
    else {
      param_4 = local_48 * 0.5;
    }
    param_2 = param_4 + param_2;
    pfVar2 = &local_38;
    local_48 = local_48 / local_2c;
    local_44 = local_44 / local_30;
    local_34 = local_2c * -0.5 - local_34;
    local_38 = local_30 * -0.5 - local_38;
  }
  FUN_00477188(local_38,local_34,pfVar2,local_44,local_48);
  FUN_0047734d(pfVar2,local_44,local_48);
  FUN_0047713c(unaff_ESI,local_3c,param_2);
  return;
}


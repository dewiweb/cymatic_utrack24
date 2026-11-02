// rea decompile_all
// name: FUN_0047c7c9
// address: 0x47c7c9
// body: available
// range: 0x47c7c9-0x47cac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047c7c9(float param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
                 ,float param_6)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  int extraout_EDX;
  float *pfVar5;
  float10 fVar6;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  char local_a4;
  int local_a0;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  void *local_20;
  int local_1c;
  int local_18;
  float local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc4;
  local_8 = 0x47c7d8;
  if (param_1 <= 0.0) {
    FUN_00478990();
  }
  else {
    FUN_0047888f();
    local_8 = 0;
    if (extraout_EDX == param_4) {
      FUN_0047899c();
    }
    else {
      FUN_00478990();
    }
    FUN_00478a0d();
    local_2c = param_1 * 9.0 * param_1;
    local_24 = param_1 * 0.5;
    FUN_0047b417(0.6 / param_6);
    local_20 = (void *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004a8c52();
    local_5c[1] = 0.0;
    local_5c[0] = 0.0;
    while (cVar2 = FUN_0047b4ad(), cVar2 != '\0') {
      if (local_a0 == 0) {
        if (0 < local_18) {
          FUN_0047c466(param_4,&local_20,0,local_24,local_2c,param_2,param_3);
          local_18 = 0;
        }
        local_5c[0] = local_b4;
        local_5c[1] = local_b0;
      }
      local_28 = local_ac - local_5c[0];
      fVar1 = local_a8 - local_5c[1];
      local_14 = local_28 * local_28 + fVar1 * fVar1;
      if (((local_a4 != '\0') || (0.0001 < local_14)) || (cVar2 = FUN_0047b480(), cVar2 != '\0')) {
        fVar6 = (float10)FUN_0044bfab(local_14);
        local_14 = (float)fVar6;
        if (local_14 == 0.0) {
          local_44 = local_5c[0];
          local_4c = local_5c[0];
          local_34 = local_5c[0];
          local_3c = local_5c[0];
          local_40 = local_5c[1];
          local_48 = local_5c[1];
          local_30 = local_5c[1];
          local_38 = local_5c[1];
        }
        else {
          local_14 = local_24 / local_14;
          local_28 = local_14 * local_28;
          fVar1 = local_14 * fVar1;
          local_34 = local_5c[0] - fVar1;
          local_30 = local_28 + local_5c[1];
          local_4c = fVar1 + local_5c[0];
          local_48 = local_5c[1] - local_28;
          local_44 = fVar1 + local_ac;
          local_40 = local_a8 - local_28;
          local_3c = local_ac - fVar1;
          local_38 = local_28 + local_a8;
        }
        if (local_1c < local_18 + 1) {
          FUN_004a8c52();
        }
        iVar4 = local_18;
        local_18 = local_18 + 1;
        pfVar3 = (float *)(iVar4 * 0x30 + (int)local_20);
        if (pfVar3 != (float *)0x0) {
          pfVar5 = local_5c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar3 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar3 = pfVar3 + 1;
          }
        }
        if (local_a4 == '\0') {
          local_5c[0] = local_ac;
          local_5c[1] = local_a8;
        }
        else {
          FUN_0047c466(param_4,&local_20,1,local_24,local_2c,param_2,param_3);
          local_18 = 0;
        }
      }
    }
    if (0 < local_18) {
      FUN_0047c466(param_4,&local_20,0,local_24,local_2c,param_2,param_3);
    }
    local_8._0_1_ = 1;
    _free(local_20);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0047b476();
    FUN_004f7994();
  }
  return;
}


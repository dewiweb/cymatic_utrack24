// rea decompile_all
// name: FUN_004a0058
// address: 0x4a0058
// body: available
// range: 0x4a0058-0x4a0236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004a0058(undefined4 param_1,float param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  void *_Src;
  undefined1 local_64 [28];
  undefined4 *local_48;
  undefined4 local_44;
  int local_40;
  void *local_3c;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  int local_1c;
  float local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_1c = 0;
  if (0 < in_ECX[2]) {
    local_48 = (undefined4 *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    FUN_0046537e(&local_20);
    local_8._0_1_ = 2;
    FUN_0049facf(&local_20,&local_48);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004652d6();
    if (local_34 < 2) {
      local_20 = 0.0;
    }
    else {
      local_20 = *(float *)((int)local_3c + 4);
    }
    local_18 = 0.0;
    local_24 = 0;
    if (param_3 < (int)param_4) {
      iVar3 = param_4 * 0x1c;
      local_30 = (double)(local_20 * 3.0);
      do {
        param_4 = param_4 - 1;
        iVar3 = iVar3 + -0x1c;
        local_18 = *(float *)(*in_ECX + iVar3 + 0xc);
        local_24 = *(undefined4 *)(*in_ECX + iVar3 + 0x10);
        FUN_004a52bb(local_64,param_4);
        thunk_FUN_004c4d7a();
        local_1c = local_1c + 1;
        if (local_18 + (float)local_30 <= param_2) break;
      } while (param_3 < (int)param_4);
    }
    param_3 = param_4 * 0x1c;
    local_30 = (double)CONCAT44(2,(undefined4)local_30);
    do {
      if (local_40 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = *local_48;
      }
      local_28 = FUN_0049fd4b(0x2e,uVar2,local_18,local_24,local_20,0);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_004a6f3f();
      uVar1 = in_ECX[2];
      if (param_4 < uVar1) {
        _Src = (void *)(*in_ECX + param_3);
        if (0 < (int)(uVar1 - param_4)) {
          _memmove((void *)((int)_Src + 0x1c),_Src,(uVar1 - param_4) * 0x1c);
        }
        if (_Src != (void *)0x0) {
          FUN_0049fd7b();
        }
        in_ECX[2] = in_ECX[2] + 1;
      }
      else {
        in_ECX[2] = uVar1 + 1;
        if (uVar1 * 0x1c + *in_ECX != 0) {
          FUN_0049fd7b();
        }
      }
      param_4 = param_4 + 1;
      param_3 = param_3 + 0x1c;
      thunk_FUN_004c4d7a();
      local_18 = local_18 + local_20;
      local_1c = local_1c + -1;
      if (param_2 < local_18) break;
      iVar3 = local_30._4_4_ + -1;
      local_30 = (double)CONCAT44(iVar3,(undefined4)local_30);
    } while (-1 < iVar3);
    local_8 = local_8 & 0xffffff00;
    _free(local_3c);
    local_8 = 0xffffffff;
    _free(local_48);
  }
  return local_1c;
}


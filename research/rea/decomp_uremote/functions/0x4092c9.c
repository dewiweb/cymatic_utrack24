// rea decompile_all
// name: FUN_004092c9
// address: 0x4092c9
// body: available
// range: 0x4092c9-0x40954c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004092c9(uint *param_1,uint param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint in_EAX;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  void *_Dst;
  int in_ECX;
  uint uVar6;
  undefined *_Src;
  uint local_10;
  int local_8;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  local_8 = 0;
  if (in_EAX < 3) {
    param_1[1] = in_EAX;
    if (in_EAX == 0) {
      if (0xe5 < param_2) goto LAB_0040944e;
      _Dst = (void *)FUN_00411976(2,0,&local_8);
      param_1[2] = (uint)_Dst;
      if (local_8 != 0) goto LAB_0040951f;
      _Src = &DAT_008fabb0;
    }
    else if (in_EAX == 1) {
      if (0xa6 < param_2) goto LAB_0040944e;
      _Dst = (void *)FUN_00411976(2,0,&local_8);
      param_1[2] = (uint)_Dst;
      if (local_8 != 0) goto LAB_0040951f;
      _Src = &DAT_008fad80;
    }
    else {
      if ((in_EAX != 2) || (0x57 < param_2)) {
LAB_0040944e:
        local_8 = 3;
        goto LAB_0040951f;
      }
      _Dst = (void *)FUN_00411976(2,0,&local_8);
      param_1[2] = (uint)_Dst;
      if (local_8 != 0) goto LAB_0040951f;
      _Src = &DAT_008faee0;
    }
    _memcpy(_Dst,_Src,param_2 * 2);
  }
  else {
    param_1[1] = param_3 + in_EAX;
    local_8 = FUN_0041106d();
    if (local_8 != 0) goto LAB_0040951f;
    uVar3 = FUN_00411330();
    *param_1 = uVar3 & 0xff;
    if (local_8 != 0) goto LAB_0040951f;
    puVar4 = (undefined2 *)FUN_00411976(2,0,&local_8);
    param_1[2] = (uint)puVar4;
    if (local_8 != 0) goto LAB_0040951f;
    *puVar4 = 0;
    if (*param_1 == 0) {
      if (param_2 != 0) {
        local_8 = FUN_004111b5();
        if (local_8 != 0) goto LAB_0040951f;
        uVar3 = 1;
        if (1 < param_2) {
          do {
            uVar2 = FUN_00411277();
            *(undefined2 *)(param_1[2] + uVar3 * 2) = uVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_2);
        }
        FUN_00411249();
      }
    }
    else {
      if (1 < *param_1 - 1) {
        local_8 = 3;
        goto LAB_0040951f;
      }
      local_10 = 1;
      if (1 < param_2) {
        do {
          uVar3 = FUN_00411377();
          uVar3 = uVar3 & 0xffff;
          if (local_8 != 0) goto LAB_0040951f;
          if (*param_1 == 2) {
            uVar5 = FUN_00411377();
            uVar5 = uVar5 & 0xffff;
          }
          else {
            uVar5 = FUN_00411330();
            uVar5 = uVar5 & 0xff;
          }
          if (local_8 != 0) goto LAB_0040951f;
          if (0xffff - uVar5 < uVar3) {
            uVar5 = 0xffff - uVar3;
          }
          uVar6 = 0;
          if (param_2 <= local_10) break;
          do {
            if (uVar5 < uVar6) break;
            uVar6 = uVar6 + 1;
            *(short *)(param_1[2] + local_10 * 2) = (short)uVar3;
            local_10 = local_10 + 1;
            uVar3 = uVar3 + 1;
          } while (local_10 < param_2);
        } while (local_10 < param_2);
      }
    }
  }
  if (param_4 != '\0') {
    local_8 = FUN_0040920c(param_2,uVar1);
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_0040951f:
  FUN_00411a5c(param_1[2]);
  param_1[2] = 0;
  FUN_00411a5c(param_1[3]);
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return local_8;
}


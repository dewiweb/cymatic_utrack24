// rea decompile_all
// name: FUN_004190c4
// address: 0x4190c4
// body: available
// range: 0x4190c4-0x4192f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004190c4(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_38 [4];
  undefined1 local_34 [8];
  int local_2c;
  void *local_28;
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  void *local_c;
  void *local_8;
  
  FUN_00418d35(param_1,&local_28);
  if (local_20 == 0) {
    return 3;
  }
  local_14 = (int *)0x0;
  local_10 = 1;
  local_8 = local_28;
  local_c = local_24;
  iVar1 = local_20;
  if (*(int *)(param_2 + 8) == 7) {
    local_18 = *param_1;
    local_1c = param_1[2];
    *param_1 = (int)local_28 + 1;
    param_1[2] = (int)local_24 - 1;
    FUN_00418d35(param_1,local_34);
    *param_1 = local_18;
    param_1[2] = local_1c;
    iVar1 = local_2c;
  }
  if (iVar1 == 3) {
    if (param_4 == 0) {
      return 3;
    }
    local_8 = (void *)((int)local_28 + 1);
    local_c = (void *)((int)local_24 - 1);
    local_10 = param_4;
    local_14 = (int *)0x1;
    if (param_4 == 0) {
      return 0;
    }
  }
  local_14 = (int *)(param_3 + (int)local_14 * 4);
  do {
    piVar2 = (int *)(*local_14 + *(int *)(param_2 + 0x10));
    FUN_00418a36(local_c);
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 1) {
      iVar1 = FUN_00419069(local_c);
LAB_004192bd:
      if (*(char *)(param_2 + 0x14) == '\x01') {
        *(char *)piVar2 = (char)iVar1;
      }
      else if (*(char *)(param_2 + 0x14) == '\x02') {
        *(short *)piVar2 = (short)iVar1;
      }
      else {
        *piVar2 = iVar1;
      }
    }
    else {
      if (iVar1 == 2) {
        iVar1 = FUN_0041b26a();
        goto LAB_004192bd;
      }
      if (iVar1 == 3) {
        uVar3 = 0;
LAB_0041928e:
        iVar1 = FUN_0041b290(&local_8,uVar3);
        goto LAB_004192bd;
      }
      if (iVar1 == 4) {
        uVar3 = 3;
        goto LAB_0041928e;
      }
      if (iVar1 < 5) {
        return 3;
      }
      if (iVar1 < 7) {
        local_1c = param_1[4];
        iVar1 = (int)local_c - (int)local_8;
        if (local_8 < local_c) {
          if (local_20 != 4) {
            if (local_20 != 2) {
              return 3;
            }
            iVar1 = iVar1 + -1;
          }
          local_8 = (void *)((int)local_8 + 1);
          if (*piVar2 != 0) {
            FUN_00411a5c(*piVar2);
            *piVar2 = 0;
          }
          _Dst = (void *)FUN_00411912(iVar1,&local_18);
          if (local_18 != 0) {
            return local_18;
          }
          _memcpy(_Dst,local_8,iVar1 - 1U);
          *(undefined1 *)((int)_Dst + (iVar1 - 1U)) = 0;
          *piVar2 = (int)_Dst;
        }
      }
      else {
        if (iVar1 != 7) {
          return 3;
        }
        iVar1 = FUN_00418fb4(&local_8,4,local_38,0);
        if (iVar1 < 0) {
          return 3;
        }
        iVar1 = FUN_0040d211();
        *piVar2 = iVar1;
        iVar1 = FUN_0040d211();
        piVar2[1] = iVar1;
        iVar1 = FUN_0040d211();
        piVar2[2] = iVar1;
        iVar1 = FUN_0040d211();
        piVar2[3] = iVar1;
      }
    }
    local_10 = local_10 + -1;
    local_14 = local_14 + 1;
    if (local_10 == 0) {
      return 0;
    }
  } while( true );
}


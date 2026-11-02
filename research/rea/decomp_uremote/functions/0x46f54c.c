// rea decompile_all
// name: FUN_0046f54c
// address: 0x46f54c
// body: available
// range: 0x46f54c-0x46f990 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0046f54c(undefined4 param_1,undefined4 param_2,char ****param_3,int param_4,int param_5,
                 int param_6,size_t param_7,undefined4 param_8,undefined4 param_9)

{
  char cVar1;
  undefined4 uVar2;
  char ***_Buf;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  lconv *plVar6;
  void *pvVar7;
  char ****ppppcVar8;
  char ****_Str;
  size_t sVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int in_ECX;
  locale local_78 [8];
  undefined4 local_70;
  undefined1 local_6c [4];
  int *local_68;
  int local_64;
  undefined1 local_60 [4];
  int local_5c;
  char local_58 [4];
  void *local_54;
  char ***local_50;
  undefined1 local_4c [4];
  char ***local_48 [5];
  uint local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [4];
  char ***local_2c [4];
  size_t local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x46f558;
  local_50 = (char ***)param_3;
  local_64 = in_ECX;
  uVar4 = FUN_00460724();
  local_8 = 0;
  piVar5 = (int *)FUN_004711d6(uVar4);
  local_8 = 0xffffffff;
  local_68 = piVar5;
  std::locale::~locale(local_78);
  FUN_00470052(local_4c);
  local_8 = 1;
  uVar3 = (**(code **)(*piVar5 + 8))();
  local_70 = CONCAT31(local_70._1_3_,uVar3);
  local_18 = 0xf;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_30,0);
  _Buf = local_50;
  local_8 = CONCAT31(local_8._1_3_,2);
  if ((*(char *)local_50 == '+') || (*(char *)local_50 == '-')) {
    local_5c = 1;
  }
  else {
    local_5c = 0;
  }
  plVar6 = _localeconv();
  local_58[0] = *plVar6->decimal_point;
  local_58[1] = 0x65;
  local_58[2] = 0;
  pvVar7 = _memchr(_Buf,0x65,param_7);
  local_54 = _memchr(local_50,(int)local_58[0],param_7);
  if (local_54 == (void *)0x0) {
    param_6 = 0;
  }
  ppppcVar8 = (char ****)local_48[0];
  if (local_34 < 0x10) {
    ppppcVar8 = local_48;
  }
  if (*(char *)ppppcVar8 != '\x7f') {
    ppppcVar8 = (char ****)local_48[0];
    if (local_34 < 0x10) {
      ppppcVar8 = local_48;
    }
    if ('\0' < *(char *)ppppcVar8) {
      FUN_0046fcc6(local_50,param_7);
      if (pvVar7 == (void *)0x0) {
        FUN_0046fd60();
      }
      else {
        if (local_54 == (void *)0x0) {
          FUN_0046fd60();
          param_4 = 0;
        }
        FUN_0046fda0(param_6,0x30);
      }
      if (local_54 == (void *)0x0) {
        FUN_0046fd60();
      }
      else {
        FUN_0046fda0(param_5,0x30);
        FUN_0046fda0(param_4,0x30);
        param_5 = 0;
      }
      param_4 = 0;
      ppppcVar8 = (char ****)local_48[0];
      if (local_34 < 0x10) {
        ppppcVar8 = local_48;
      }
      _Str = (char ****)local_2c[0];
      if (local_18 < 0x10) {
        _Str = local_2c;
      }
      sVar9 = _strcspn((char *)_Str,local_58);
      while (((cVar1 = *(char *)ppppcVar8, cVar1 != '\x7f' && ('\0' < cVar1)) &&
             ((uint)(int)cVar1 < sVar9 - local_5c))) {
        sVar9 = sVar9 - (int)cVar1;
        FUN_0046fda0(1,0);
        if ('\0' < *(char *)((int)ppppcVar8 + 1)) {
          ppppcVar8 = (char ****)((int)ppppcVar8 + 1);
        }
      }
      if (local_18 < 0x10) {
        local_2c[0] = (char ***)local_2c;
      }
      param_6 = 0;
      param_7 = local_1c;
      in_ECX = local_64;
      local_50 = local_2c[0];
    }
  }
  uVar11 = *(uint *)(in_ECX + 0x18);
  uVar10 = param_4 + param_5 + param_6 + param_7;
  if (((int)uVar11 < 1) || (uVar11 <= uVar10)) {
    local_54 = (void *)0x0;
  }
  else {
    local_54 = (void *)(uVar11 - uVar10);
  }
  uVar11 = *(uint *)(in_ECX + 0x10) & 0x1c0;
  if (uVar11 != 0x40) {
    if ((uVar11 == 0x100) && (local_5c != 0)) {
      puVar12 = (undefined4 *)FUN_0046ff50(param_8,param_9,1);
      param_8 = *puVar12;
      local_50 = (char ***)((int)local_50 + 1);
      param_7 = param_7 - 1;
      param_9 = puVar12[1];
      in_ECX = local_64;
    }
    puVar12 = (undefined4 *)FUN_0046fbd0(param_8,param_9,param_2,local_54);
    param_8 = *puVar12;
    param_9 = puVar12[1];
    local_54 = (void *)0x0;
  }
  pvVar7 = _memchr(local_50,(int)local_58[0],param_7);
  if (pvVar7 != (void *)0x0) {
    iVar13 = ((int)pvVar7 - (int)local_50) + 1;
    puVar12 = (undefined4 *)
              FUN_0046ff82(local_60,(int)pvVar7 - (int)local_50,local_70,param_8,param_9);
    puVar12 = (undefined4 *)FUN_0046fbd0(*puVar12,puVar12[1],0x30,param_4);
    uVar4 = *puVar12;
    uVar2 = puVar12[1];
    uVar3 = (**(code **)(*local_68 + 4))();
    local_68 = (int *)CONCAT31(local_68._1_3_,uVar3);
    puVar12 = (undefined4 *)FUN_0046fbd0(uVar4,uVar2,local_68,1);
    puVar12 = (undefined4 *)FUN_0046fbd0(*puVar12,puVar12[1],0x30,param_5);
    param_8 = *puVar12;
    local_50 = (char ***)((int)local_50 + iVar13);
    param_9 = puVar12[1];
    param_7 = param_7 - iVar13;
    in_ECX = local_64;
  }
  pvVar7 = _memchr(local_50,0x65,param_7);
  if (pvVar7 != (void *)0x0) {
    iVar13 = ((int)pvVar7 - (int)local_50) + 1;
    puVar12 = (undefined4 *)
              FUN_0046ff82(local_6c,(int)pvVar7 - (int)local_50,local_70,param_8,param_9);
    puVar12 = (undefined4 *)FUN_0046fbd0(*puVar12,puVar12[1],0x30,param_6);
    param_6 = 0;
    puVar12 = (undefined4 *)FUN_0046ff50(*puVar12,puVar12[1],1);
    param_8 = *puVar12;
    local_50 = (char ***)((int)local_50 + iVar13);
    param_9 = puVar12[1];
    param_7 = param_7 - iVar13;
    in_ECX = local_64;
  }
  puVar12 = (undefined4 *)FUN_0046ff82(local_6c,param_7,local_70,param_8,param_9);
  puVar12 = (undefined4 *)FUN_0046fbd0(*puVar12,puVar12[1],0x30,param_6);
  uVar4 = *puVar12;
  uVar2 = puVar12[1];
  *(undefined4 *)(in_ECX + 0x18) = 0;
  FUN_0046fbd0(uVar4,uVar2,param_2,local_54);
  FID_conflict__Tidy(1,0);
  FID_conflict__Tidy(1,0);
  FUN_005b9f18();
  return;
}


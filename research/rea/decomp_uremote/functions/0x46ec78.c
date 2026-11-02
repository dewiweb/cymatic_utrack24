// rea decompile_all
// name: FUN_0046ec78
// address: 0x46ec78
// body: available
// range: 0x46ec78-0x46eddc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0046ec78(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,char param_6)

{
  uint uVar1;
  undefined4 uVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined1 local_60 [28];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  int local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_30 [4];
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x46ec84;
  local_3c = param_1;
  if ((*(uint *)(param_4 + 0x10) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x1c))(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar2 = FUN_00460724();
    local_8 = 0;
    local_34 = FUN_004711d6(uVar2);
    std::locale::~locale((locale *)&local_38);
    local_18 = 0xf;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(local_30,0);
    local_8 = 1;
    if (param_6 == '\0') {
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0046fbfa(local_60);
      local_8._0_1_ = 3;
    }
    else {
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_0046fc11(local_60);
      local_8._0_1_ = 2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_30,pbVar3,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    FID_conflict__Tidy(1,0);
    uVar1 = *(uint *)(param_4 + 0x18);
    if (((int)uVar1 < 1) || (uVar1 <= local_1c)) {
      local_34 = 0;
    }
    else {
      local_34 = uVar1 - local_1c;
    }
    if ((*(uint *)(param_4 + 0x10) & 0x1c0) != 0x40) {
      puVar4 = (undefined4 *)FUN_0046fbd0(param_2,param_3,param_5,local_34);
      param_2 = *puVar4;
      param_3 = puVar4[1];
      local_34 = 0;
    }
    local_38 = local_2c[0];
    local_44 = param_2;
    local_40 = param_3;
    uVar1 = local_1c;
    if (local_18 < 0x10) {
      local_38 = local_2c;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_0047000a();
      local_38 = (undefined4 ***)((int)local_38 + 1);
    }
    *(undefined4 *)(param_4 + 0x18) = 0;
    FUN_0046fbd0(local_44,local_40,param_5,local_34);
    FID_conflict__Tidy(1,0);
  }
  FUN_005b9f18();
  return;
}


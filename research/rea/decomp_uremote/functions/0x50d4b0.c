// rea decompile_all
// name: FUN_0050d4b0
// address: 0x50d4b0
// body: available
// range: 0x50d4b0-0x50da4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050d4b0(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  undefined ***pppuStack_18c;
  int *piStack_188;
  int *piStack_184;
  undefined1 *puStack_180;
  uint uStack_17c;
  int local_178;
  undefined ***local_174;
  undefined ***local_170;
  int *local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined ***local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined **local_130;
  undefined4 local_12c;
  int local_128 [3];
  undefined1 local_11c [12];
  undefined4 local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined1 *local_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [92];
  uint local_8c;
  undefined **local_88;
  undefined **local_28;
  undefined4 local_24;
  char local_19;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005ced92;
  local_10 = ExceptionList;
  uStack_17c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8c = uStack_17c;
  if (param_5 != (int *)0x0) {
    local_14 = 0;
    puStack_180 = (undefined1 *)0x50d535;
    local_160 = in_ECX;
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))();
    if (*(int *)(local_160 + -0xa44) == 3) {
      local_f8 = 0;
      local_100 = 0xffffffff;
      local_108 = 0;
      local_110 = 0xffffffff;
      puStack_180 = (undefined1 *)param_6;
      piStack_184 = (int *)(local_160 + -0xb5c);
      piStack_188 = param_5;
      local_f4 = (undefined1 *)&pppuStack_18c;
      local_14c = (undefined1 *)&pppuStack_18c;
      pppuStack_18c = (undefined ***)0x0;
      local_fc = (undefined1 *)&puStack_190;
      local_150 = (undefined1 *)&puStack_190;
      puStack_190 = (undefined4 *)0xffffffff;
      local_104 = (undefined1 *)&puStack_194;
      local_154 = (undefined1 *)&puStack_194;
      puStack_194 = (undefined4 *)0x0;
      local_10c = (undefined1 *)&puStack_198;
      local_158 = (undefined1 *)&puStack_198;
      puStack_198 = (undefined4 *)0xffffffff;
      uVar2 = (uint)param_1;
      uVar3 = param_3;
      uVar4 = param_4;
      uVar1 = FUN_0052dce0(local_11c);
      local_164 = FUN_005452a0(uVar1,uVar2,param_2,uVar3,uVar4);
      local_14 = local_164;
    }
    else {
      puStack_180 = (undefined1 *)0x0;
      piStack_184 = (int *)0x0;
      piStack_188 = (int *)0x50d64d;
      FUN_00543ff0();
      local_15c = &local_28;
      local_88 = CPCHAI::CFakeIAsync::vftable;
      local_28 = CPCHAI::CFakeIAsync::vftable;
      local_24 = param_6;
      local_8 = 0;
      puStack_180 = (undefined1 *)0x50d68b;
      FUN_005067b0();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_128[1] = 0;
      local_128[2] = 0;
      local_12c = 0xffffffff;
      local_128[0] = -1;
      local_134 = 0;
      local_130 = (undefined **)0x0;
      local_13c = 0xffffffff;
      local_138 = 0xffffffff;
      puStack_180 = local_e8;
      piStack_184 = local_128 + 2;
      piStack_188 = local_128;
      pppuStack_18c = &local_130;
      puStack_190 = &local_138;
      puStack_194 = &param_4;
      puStack_198 = &param_3;
      local_18 = FUN_00525af0(param_1,param_2);
      local_19 = '\0';
      if (local_18 != 0) {
        puStack_180 = local_e8;
        piStack_184 = (int *)(local_160 + -0xb5c);
        piStack_188 = (int *)0x50d756;
        local_ec = FUN_00544c30();
        if (local_ec != 0) {
          puStack_180 = local_148;
          piStack_184 = (int *)0x50d79b;
          puStack_180 = (undefined1 *)
                        (**(code **)(*(int *)(local_18 + 0x28 +
                                             *(int *)(*(int *)(local_18 + 0x28) + 0xc)) + 0x98))();
          piStack_184 = (int *)0x50d7ad;
          local_f0 = FUN_0051f960();
          if (local_f0 == 0) {
            puStack_180 = (undefined1 *)local_18;
            piStack_184 = (int *)0x50d7c5;
            local_f0 = FUN_0051ade0();
          }
          if (local_f0 != 0) {
            puStack_180 = (undefined1 *)0x50d7ec;
            FUN_00515830();
            if (local_ec == 0) {
              local_168 = 0;
            }
            else {
              local_168 = local_ec + 0x28 + *(int *)(*(int *)(local_ec + 0x28) + 0xc);
            }
            if (local_f0 == 0) {
              local_16c = (int *)0x0;
            }
            else {
              local_16c = (int *)(local_f0 + 0x28 + *(int *)(*(int *)(local_f0 + 0x28) + 0xc));
            }
            if (&stack0x00000000 == (undefined1 *)0x88) {
              local_170 = (undefined ***)0x0;
            }
            else {
              local_170 = &local_28;
            }
            puStack_180 = (undefined1 *)local_168;
            piStack_184 = local_16c;
            piStack_188 = (int *)0x81;
            pppuStack_18c = local_170;
            puStack_190 = (undefined4 *)0x50d89a;
            (**(code **)(*param_5 + 4))();
            puStack_190 = (undefined4 *)0x50d8ab;
            FUN_00515860();
            puStack_190 = (undefined4 *)0x50d8dc;
            (**(code **)(*(int *)(local_f0 + 0x28 + *(int *)(*(int *)(local_f0 + 0x28) + 8)) + 4))()
            ;
            local_19 = '\x01';
          }
          if (local_ec != 0) {
            puStack_180 = (undefined1 *)0x50d91a;
            (**(code **)(*(int *)(local_ec + 0x28 + *(int *)(*(int *)(local_ec + 0x28) + 8)) + 4))()
            ;
          }
        }
      }
      if (local_19 == '\0') {
        puStack_180 = (undefined1 *)0x50d933;
        FUN_00515830();
        if (&stack0x00000000 == (undefined1 *)0x88) {
          local_174 = (undefined ***)0x0;
        }
        else {
          local_174 = &local_28;
        }
        puStack_180 = (undefined1 *)0x0;
        piStack_184 = (int *)0x0;
        piStack_188 = (int *)0x80;
        pppuStack_18c = local_174;
        puStack_190 = (undefined4 *)0x50d975;
        (**(code **)(*param_5 + 4))();
        puStack_180 = (undefined1 *)0x50d986;
        FUN_00515860();
      }
      local_8 = local_8 & 0xffffff00;
      puStack_180 = (undefined1 *)0x50d995;
      FUN_00506c20();
      local_8 = 0xffffffff;
      local_28 = CPNS::IAsync::vftable;
      puStack_180 = (undefined1 *)0x50d9ae;
      FUN_00544100();
    }
    if (local_14 != 0) {
      puStack_180 = (undefined1 *)0x50d9bc;
      FUN_00544360();
    }
    puStack_180 = (undefined1 *)0x50d9f9;
    (**(code **)(*(int *)(local_160 + -0xb50 + *(int *)(*(int *)(local_160 + -0xb50) + 4)) + 0x2c))
              ();
    if (local_14 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = local_14 + 0xa8 + *(int *)(*(int *)(local_14 + 0xa8) + 4);
    }
  }
  ExceptionList = local_10;
  uStack_17c = 0x50da45;
  __security_check_cookie(local_8c ^ (uint)&stack0xfffffffc);
  return;
}


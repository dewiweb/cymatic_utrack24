// rea decompile_all
// name: FUN_00058688
// address: 0x58688
// body: available
// range: 0x58688-0x58947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00058688(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [8];
  uint local_3c;
  int *local_38;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  uint uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  FUN_001a2920(auStack_44,param_1 + 0x2c);
  FUN_000ed2b8(auStack_60,0xffffffff,0,0,0,0,0xffffffff);
  local_38 = (int *)FUN_0022bc6c(param_1 + 0x20);
  iVar1 = (**(code **)(*local_38 + 0x2c))(local_38,param_5,auStack_60,param_7,param_8,1);
  if (iVar1 == 0) {
    FUN_00002898(s_ERROR__LCDDisplay__drawCharInRec_00058948);
    FUN_001a2938(auStack_44);
    local_3c = 0;
  }
  else {
    uVar2 = FUN_001ba360(auStack_60);
    uVar2 = uVar2 & 0xff;
    uVar3 = FUN_001ba36c(auStack_60);
    pbVar4 = (byte *)FUN_001b5fc0(auStack_60);
    if (uVar2 == 0) {
      FUN_001a2938(auStack_44);
      local_3c = 0;
    }
    else {
      if (param_3 < 0) {
        local_64 = param_3;
        if (param_3 < 0) {
          local_64 = -param_3;
        }
      }
      else {
        local_64 = 0;
      }
      local_3c = uVar2;
      if (local_64 < (int)uVar2) {
        local_68 = 0;
        if (pbVar4 == (byte *)0x0) {
          FUN_001a2938(auStack_44);
          local_3c = 0;
        }
        else {
          for (local_6c = 0; local_6c < (int)(uVar3 & 0xff); local_6c = local_6c + 8) {
            pbVar4 = pbVar4 + local_64;
            for (iVar1 = local_64; iVar1 < (int)uVar2; iVar1 = iVar1 + 1) {
              iVar5 = FUN_001b237c(local_30);
              if (iVar5 <= param_3 + iVar1) {
                pbVar4 = pbVar4 + (uVar2 - iVar1);
                local_68 = 1;
                break;
              }
              if ((int)param_4 < 0) {
                uVar9 = param_4;
                if ((int)param_4 < 0) {
                  uVar9 = -param_4;
                }
              }
              else {
                uVar9 = 0;
              }
              while( true ) {
                local_70 = (uVar3 & 0xff) - local_6c;
                local_74 = 8;
                piVar8 = (int *)FUN_00247c08(&local_70,&local_74);
                if ((*piVar8 <= (int)uVar9) ||
                   (iVar5 = FUN_001b239c(local_30), iVar5 <= (int)(param_4 + uVar9))) break;
                iVar5 = FUN_001b2390(local_30);
                iVar5 = iVar5 + param_4 + uVar9;
                iVar6 = FUN_001b23b0(local_30);
                uVar7 = param_6;
                if (((uint)*pbVar4 & 1 << (uVar9 & 0xff)) != 0) {
                  uVar7 = param_6 ^ 1;
                }
                FUN_00098e90(param_1 + 0x10,iVar6 + param_3 + iVar1,iVar5,uVar7);
                uVar9 = uVar9 + 1;
              }
              pbVar4 = pbVar4 + 1;
            }
            param_4 = param_4 + 8;
          }
          if (local_68 == 0) {
            FUN_001a2938(auStack_44);
          }
          else {
            FUN_001a2938(auStack_44);
            local_3c = 0xffffffff;
          }
        }
      }
      else {
        FUN_001a2938(auStack_44);
      }
    }
  }
  return local_3c;
}


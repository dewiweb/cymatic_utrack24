// rea decompile_all
// name: FUN_000c9124
// address: 0xc9124
// body: available
// range: 0xc9124-0xc94b3 inclusive
// range: 0xc9580-0xc9717 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c9124(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  undefined1 auStack_30 [12];
  
  FUN_00204380(auStack_30);
  local_34 = 0;
  switch(param_1[0x39]) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    goto LAB_000c9180;
  case 4:
LAB_000c9180:
    bVar1 = true;
    goto LAB_000c91a4;
  default:
    FUN_00002898(_DAT_000c94b4);
    param_1[0x39] = 2;
    bVar1 = false;
    goto LAB_000c91a4;
  }
  bVar1 = false;
LAB_000c91a4:
  FUN_000c8ac4(param_1);
  iVar2 = FUN_001baadc();
  if (iVar2 == 1) {
    uVar3 = FUN_000b4964();
    iVar2 = FUN_000b4840(uVar3,s___USBBusDriverService_000c94b6 + 2,auStack_30);
    if (iVar2 == 0) {
      FUN_00002898(_DAT_000c94cc);
      FUN_000d051c(auStack_30);
      return 0;
    }
    piVar4 = (int *)FUN_0022bcb4(auStack_30);
    local_34 = (**(code **)(*piVar4 + 0x90))(piVar4);
    if (local_34 == 0) {
      if (bVar1) {
        FUN_00122478(param_1 + 0x3d,3);
      }
      else {
        FUN_00122478(param_1 + 0x3d,0);
      }
    }
    else if (bVar1) {
      FUN_00122478(param_1 + 0x3d,3);
    }
  }
  else if (bVar1) {
    FUN_00122478(param_1 + 0x3d,3);
  }
  else {
    FUN_00122478(param_1 + 0x3d,0);
  }
  iVar2 = FUN_000c892c(param_1,param_1 + 0x82);
  if (iVar2 == 0) {
    FUN_00002898(s___ERROR__prepareAndSetCurrentCon_000c94ce + 2);
    FUN_000d051c(auStack_30);
    uVar3 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x120))(param_1,param_1 + 0x82);
    iVar2 = FUN_000c8718(param_1,param_1 + 0x6d);
    if (iVar2 == 0) {
      FUN_00002898(s_ERROR__prepareAndSetCurrentConfi_000c950c);
      FUN_000d051c(auStack_30);
      uVar3 = 0;
    }
    else {
      (**(code **)(*param_1 + 0x118))(param_1,param_1 + 0x6d);
      FUN_000c8ac4(param_1);
      iVar2 = FUN_001baadc();
      if (iVar2 == 1) {
        if (local_34 != 0) {
          FUN_000c90d8(param_1);
          local_38 = 0x10;
          local_3c = 0x10;
          local_40 = 0x1800000;
          iVar2 = FUN_000466b0(_DAT_000c9544,&local_44);
          if (iVar2 == 0) {
            FUN_00002898(DAT_000c9574,_DAT_000c9544);
          }
          else {
            FUN_0004febc(local_44,s___MaxNoOfEncoders_000c9546 + 2,&local_38);
            FUN_0004febc(local_44,s_MaxNoOfDecoders_000c9558,&local_3c);
            FUN_0004febc(local_44,s_MaxHeapSize_000c9568,&local_40);
            FUN_00046b8c(local_44);
          }
          iVar2 = FUN_001c6b14(0xa0,DAT_000c9578);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_00126408(iVar2,param_1 + 0x53,local_38 & 0xff,local_3c & 0xff,local_40);
          }
          param_1[0x5b] = iVar2;
          FUN_000d051c(auStack_30);
          return 1;
        }
        uVar5 = FUN_0004ceb0(param_1[0x39],0);
        iVar6 = (uVar5 >> 3) * 6 * param_1[0x75];
        iVar2 = param_1[0x75];
        piVar4 = (int *)FUN_0022bcb4(auStack_30);
        (**(code **)(*piVar4 + 0x14))(piVar4,2,iVar6,iVar6 - iVar2 * (uVar5 >> 3),param_1[0x39]);
      }
      FUN_000c90d8(param_1);
      FUN_000c8ac4(param_1);
      iVar2 = FUN_001baadc();
      if (iVar2 == 1) {
        iVar2 = FUN_001c6b14(0x7c,DAT_000c9578);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_00121f78(iVar2,param_1 + 0x53);
        }
        param_1[0x5b] = iVar2;
        FUN_000c8ac4(param_1);
        iVar2 = FUN_001bab0c();
        if (iVar2 == 0) {
          if (bVar1) {
            FUN_001435d0(&local_44,DAT_000c972c,DAT_000c9718);
            iVar2 = (**(code **)(*(int *)param_1[0x5b] + 0xc))((int *)param_1[0x5b],&local_44,0);
            if (iVar2 == 0) {
              FUN_00002898(DAT_000c9720);
            }
            FUN_00143614(&local_44);
          }
          else {
            FUN_001435d0(&local_44,DAT_000c9728,DAT_000c9718);
            iVar2 = (**(code **)(*(int *)param_1[0x5b] + 0xc))((int *)param_1[0x5b],&local_44,0);
            if (iVar2 == 0) {
              FUN_00002898(DAT_000c9720);
            }
            FUN_00143614(&local_44);
          }
        }
        else if (bVar1) {
          FUN_001435d0(&local_44,DAT_000c9724,DAT_000c9718);
          iVar2 = (**(code **)(*(int *)param_1[0x5b] + 0xc))((int *)param_1[0x5b],&local_44,0);
          if (iVar2 == 0) {
            FUN_00002898(DAT_000c9720);
          }
          FUN_00143614(&local_44);
        }
        else {
          FUN_001435d0(&local_44,DAT_000c971c,DAT_000c9718);
          iVar2 = (**(code **)(*(int *)param_1[0x5b] + 0xc))((int *)param_1[0x5b],&local_44,0);
          if (iVar2 == 0) {
            FUN_00002898(DAT_000c9720);
          }
          FUN_00143614(&local_44);
        }
      }
      else if (iVar2 == 2) {
        FUN_00002898(DAT_000c957c);
        FUN_000d051c(auStack_30);
        return 0;
      }
      FUN_000d051c(auStack_30);
      uVar3 = 1;
    }
  }
  return uVar3;
}


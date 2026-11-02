// rea decompile_all
// name: FUN_0010ba44
// address: 0x10ba44
// body: available
// range: 0x10ba44-0x10bdb7 inclusive
// range: 0x10be54-0x10c157 inclusive
// range: 0x10c1d8-0x10c253 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0010ba44(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  
  local_24 = param_4;
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_0009dc24(param_1,param_2);
  if (iVar2 != 0) {
    return 0;
  }
  if (param_2 == DAT_0010bdb8) {
    FUN_00243490(param_1 + 0x28,param_1[0x32]);
    iVar2 = FUN_0022d4a8();
    if (iVar2 != 0) {
      iVar2 = FUN_001b5adc(uVar1);
      if (iVar2 != 0) {
        FUN_000f8ee0();
        FUN_001b9a28();
        iVar2 = FUN_001bab0c();
        if (iVar2 == 1) {
          uVar1 = FUN_00243490(param_1 + 0x25,param_1[0x32]);
          iVar2 = FUN_0022d4cc(uVar1,s_Clock_Source_0010bdbc);
          if (iVar2 == 0) {
            return 1;
          }
        }
      }
      *(bool *)((int)param_1 + 0xdf) = *(char *)((int)param_1 + 0xdf) == '\0';
      if (*(char *)((int)param_1 + 0xdf) == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        FUN_0010db64(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x8c))(param_1);
      }
      return 1;
    }
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if (*piVar3 == 0x1f) {
      *(bool *)((int)param_1 + 0xdf) = *(char *)((int)param_1 + 0xdf) == '\0';
      if ((char)param_1[0x38] == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 1;
        *(undefined1 *)((int)param_1 + 0xdf) = 1;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        uVar1 = FUN_0011eda0();
        local_24 = 1;
        FUN_0011fe74(uVar1,s_Unload_Playlist__0010bdd4,&DAT_0010bdd0,
                     *(undefined1 *)((int)param_1 + 0xe1),&DAT_0010bdcc);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1b);
      }
      else {
        if (*(char *)((int)param_1 + 0xe1) == '\0') {
          *(undefined1 *)(param_1 + 0x38) = 0;
        }
        else {
          uVar1 = FUN_0011eda0();
          FUN_0011ff88(uVar1,s_Playlist_Unloaded_0010bde8,s_Clock_Source_0010bdbc + 0xc);
          uVar1 = FUN_0011eda0();
          FUN_000a1000(uVar1,0x1c);
          (**(code **)(*(int *)param_1[0x31] + 0x24))((int *)param_1[0x31],0xb,0,2000,0);
          uVar1 = FUN_0024310c(param_1 + 0x25);
          FUN_00243124(param_1 + 0x25,uVar1);
          uVar1 = FUN_00244140(param_1 + 0x39);
          FUN_0024418c(param_1 + 0x39,uVar1);
          FUN_001a48f0(param_1,0xb,0);
        }
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      return 1;
    }
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if (*piVar3 == 0x21) {
      *(bool *)((int)param_1 + 0xdf) = *(char *)((int)param_1 + 0xdf) == '\0';
      if ((char)param_1[0x38] == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 1;
        *(undefined1 *)((int)param_1 + 0xdf) = 1;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        uVar1 = FUN_0011eda0();
        local_24 = 0;
        FUN_0011fe74(uVar1,s_Device_will_restart_0010be00,&DAT_0010bdfc,
                     *(undefined1 *)((int)param_1 + 0xe1),&DAT_0010bdcc);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1b);
      }
      else {
        if (*(char *)((int)param_1 + 0xe1) != '\0') {
          uVar1 = FUN_0011eda0();
          FUN_0011ff88(uVar1,s_Device_Restarting_0010be14,s_Clock_Source_0010bdbc + 0xc);
          uVar1 = FUN_0011eda0();
          FUN_000a1000(uVar1,0x1c);
          piVar3 = (int *)FUN_000f8ee0();
          iVar2 = (**(code **)(*piVar3 + 0x6c))(piVar3);
          if ((iVar2 == 1) || (iVar2 == 2)) {
            local_24 = 4;
            iVar2 = FUN_00200f9c(&local_24,s_sds___cne_AppSettings_Global_Sam_0010be28);
            if (iVar2 == 0) {
              FUN_00002898(DAT_0010be50);
            }
          }
          else {
            local_24 = 2;
            iVar2 = FUN_00200f9c(&local_24,s_sds___cne_AppSettings_Global_Sam_0010be28);
            if (iVar2 == 0) {
              FUN_00002898(DAT_0010be50);
            }
          }
          FUN_0003fe6c(s_SystemHalt_called_for_changing_t_0010c158);
          return 1;
        }
        *(undefined1 *)(param_1 + 0x38) = 0;
        (**(code **)(*param_1 + 0x50))(param_1);
      }
      return 1;
    }
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if (*piVar3 == 0x31) {
      *(bool *)((int)param_1 + 0xdf) = *(char *)((int)param_1 + 0xdf) == '\0';
      if ((char)param_1[0x38] == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 1;
        *(undefined1 *)((int)param_1 + 0xdf) = 1;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        uVar1 = FUN_0011eda0();
        local_24 = 0;
        FUN_0011fe74(uVar1,s_Load_Saved_Settings__0010c188,&DAT_0010bdd0,
                     *(undefined1 *)((int)param_1 + 0xe1),&DAT_0010bdcc);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1b);
      }
      else if (*(char *)((int)param_1 + 0xe1) == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0;
        FUN_0010c254(param_1);
      }
      else {
        uVar1 = FUN_0011eda0();
        FUN_0011ff88(uVar1,s_Settings_Loaded_0010c1a0,s_Load_Saved_Settings__0010c188 + 0x14);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1c);
        (**(code **)(*(int *)param_1[0x31] + 0x24))((int *)param_1[0x31],0xb,0,2000,0);
        FUN_0010c474(param_1);
      }
      return 1;
    }
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if (*piVar3 == 0x32) {
      *(bool *)((int)param_1 + 0xdf) = *(char *)((int)param_1 + 0xdf) == '\0';
      if ((char)param_1[0x38] == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 1;
        *(undefined1 *)((int)param_1 + 0xdf) = 1;
        *(undefined1 *)((int)param_1 + 0xe1) = 0;
        uVar1 = FUN_0011eda0();
        local_24 = 0;
        FUN_0011fe74(uVar1,s_Save_Current_Settings__0010c1b0,&DAT_0010bdd0,
                     *(undefined1 *)((int)param_1 + 0xe1),&DAT_0010bdcc);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1b);
      }
      else if (*(char *)((int)param_1 + 0xe1) == '\0') {
        *(undefined1 *)(param_1 + 0x38) = 0;
        FUN_0010c254(param_1);
      }
      else {
        uVar1 = FUN_0011eda0();
        FUN_0011ff88(uVar1,s_Settings_Saved_0010c1c8,s_Load_Saved_Settings__0010c188 + 0x14);
        uVar1 = FUN_0011eda0();
        FUN_000a1000(uVar1,0x1c);
        (**(code **)(*(int *)param_1[0x31] + 0x24))((int *)param_1[0x31],0xb,0,2000,0);
        FUN_0010cef0(param_1);
      }
      return 1;
    }
  }
  if ((param_2 == 0x192) && (*(char *)((int)param_1 + 0xdf) != '\0')) {
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if ((*piVar3 == 0x20) ||
       ((piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]), *piVar3 == 0x23 ||
        (piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]), *piVar3 == 0x22)))) {
      (**(code **)(*param_1 + 0x80))(param_1);
      FUN_0010dc24(param_1);
      FUN_0010c254(param_1);
      *(undefined1 *)((int)param_1 + 0xdf) = 0;
      return 1;
    }
    piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]);
    if ((((*piVar3 == 0x31) ||
         (piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]), *piVar3 == 0x32)) ||
        (piVar3 = (int *)FUN_002444e4(param_1 + 0x39,param_1[0x32]), *piVar3 == 0x1f)) &&
       ((char)param_1[0x38] != '\0')) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      FUN_0010c254(param_1);
      *(undefined1 *)((int)param_1 + 0xdf) = 0;
      return 1;
    }
  }
  return 0;
}


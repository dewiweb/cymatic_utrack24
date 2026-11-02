// rea decompile_all
// name: FUN_0014fc7c
// address: 0x14fc7c
// body: available
// range: 0x14fc7c-0x14febb inclusive
// range: 0x14ffe4-0x150047 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014fc7c(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = FUN_00041c14(s__cfg_AppSettings_SIP_0014febc,&uStack_14);
  if (iVar1 != 0) {
    iVar1 = FUN_00043278(uStack_14,s_Enabled_0014fed4,param_1);
    if (iVar1 == 0) {
      FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Enabled_0014fed4);
    }
    iVar1 = _DAT_0014ff04;
    if (*param_1 != '\0') {
      aiStack_20[0] = _DAT_0014ff04;
      iVar2 = FUN_00042a00(uStack_14,s_I_NATExternalIP_0014ff06 + 2,aiStack_20);
      if (iVar2 == 0) {
        FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_I_NATExternalIP_0014ff06 + 2);
      }
      if (*(int *)(aiStack_20[0] + -4) != 0) {
        iVar2 = FUN_0018e28c(aiStack_20[0],&uStack_10);
        if (iVar2 == 0) {
          FUN_000028a4(s_ERROR__SIPConfig__load__Invalid_e_0014ff18,aiStack_20[0]);
        }
        else {
          *(undefined4 *)(param_1 + 8) = uStack_10;
        }
      }
      iVar2 = FUN_00047cf4(uStack_14,s_Registrar_0014ff54,&uStack_18);
      if (iVar2 == 0) {
        FUN_000028a4(s_ERROR__SIPConfig__load____s__dir_0014ffb0,s_Registrar_0014ff54);
      }
      else {
        iVar2 = FUN_00043278(uStack_18,s_Enabled_0014fed4,param_1 + 1);
        if (iVar2 == 0) {
          FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Enabled_0014fed4);
        }
        if (param_1[1] != '\0') {
          iVar2 = FUN_00042a00(uStack_18,s_CallerSIPURL_0014ff60,param_1 + 0xc);
          if (iVar2 == 0) {
            FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_CallerSIPURL_0014ff60);
          }
          iVar2 = FUN_00042a00(uStack_18,s_Server_0014ff70,param_1 + 0x10);
          if (iVar2 == 0) {
            FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Server_0014ff70);
          }
          iVar2 = FUN_00048ef8(uStack_18,s_Expires_0014ff78,param_1 + 4);
          if (iVar2 == 0) {
            FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Expires_0014ff78);
          }
          iVar2 = FUN_00047cf4(uStack_18,s_Authentication_0014ff80,&uStack_10);
          if (iVar2 == 0) {
            FUN_000028a4(s_ERROR__SIPConfig__load____s__dir_0014ffb0,s_Authentication_0014ff80);
          }
          else {
            iVar2 = FUN_00043278(uStack_10,s_Enabled_0014fed4,param_1 + 2);
            if (iVar2 == 0) {
              FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Enabled_0014fed4);
            }
            if (param_1[2] != '\0') {
              iVar2 = FUN_00042a00(uStack_10,s_UserName_0014ff90,param_1 + 0x14);
              if (iVar2 == 0) {
                FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_UserName_0014ff90);
              }
              iVar2 = FUN_00042a00(uStack_10,s_Login_0014ff9c,param_1 + 0x18);
              if (iVar2 == 0) {
                FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Login_0014ff9c);
              }
              iVar2 = FUN_00042a00(uStack_10,s_Password_0014ffa4,param_1 + 0x1c);
              if (iVar2 == 0) {
                FUN_000028a4(s_ERROR__SIPConfig__load____s__not_0014fedc,s_Password_0014ffa4);
              }
            }
            FUN_00041dd4(uStack_10);
          }
        }
        FUN_00041dd4(uStack_18);
      }
      if (aiStack_20[0] != iVar1) {
        piVar3 = (int *)(aiStack_20[0] + -0xc);
        iVar1 = *piVar3;
        if ((iVar1 == -1) || ((piVar3 != DAT_00150048 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
          FUN_0010fa20(aiStack_20[0] + -0xc,*(int *)(aiStack_20[0] + -8) + 0xe,0);
        }
      }
    }
    FUN_00041dd4(uStack_14);
    return;
  }
  return;
}


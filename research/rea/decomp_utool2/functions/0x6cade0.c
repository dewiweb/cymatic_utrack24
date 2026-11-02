// rea decompile_all
// name: FUN_006cade0
// address: 0x6cade0
// body: available
// range: 0x6cade0-0x6cb013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cade0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puStack_b4;
  undefined4 local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 *local_8c;
  undefined4 **local_88;
  code *local_84;
  byte local_5c;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007262d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    local_84 = (code *)0x6cae21;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + 0xc) == 0) {
      *(undefined4 *)(in_ECX + 8) = 0x14;
      *(undefined4 *)(in_ECX + 0xc) = 0x14;
      local_8 = 0;
      if (DAT_00c8a668 == 0) {
        local_84 = (code *)0x6cae4c;
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      local_84 = (code *)0x6cae63;
      FUN_00463c00();
      local_8 = 0xffffffff;
    }
    else {
      FUN_00463b90();
    }
    local_84 = (code *)0x6cae83;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (DAT_00c8a67c == 0) {
      local_84 = (code *)0x6cae96;
      local_14 = operator_new(0xd0);
      local_8 = 1;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    local_84 = (code *)0x6caec1;
    FUN_006cb390();
    local_84 = (code *)0x6caecc;
    FUN_0048e190();
    *(undefined4 *)(in_ECX + 0x58) = local_18;
    *(undefined4 **)(in_ECX + 0x5c) = local_14;
    local_24 = (double)(float)local_14 + 6755399441055744.0;
    local_2c = (double)*(float *)(in_ECX + 0x58) + 6755399441055744.0;
    local_84 = (code *)(undefined4)local_2c;
    local_88 = (undefined4 **)0x6caf1c;
    iVar2 = FUN_006cb750();
    if (iVar2 != 0) {
      local_84 = (code *)0x6caf2f;
      local_14 = (undefined4 *)FUN_0040de70();
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        local_14[1] = local_14[1] + 1;
        UNLOCK();
      }
      local_8 = 2;
      local_84 = *(code **)(in_ECX + 0x58);
      local_88 = (undefined4 **)0x0;
      local_8c = &local_2c;
      local_90 = 0x6caf5e;
      FUN_006e0ff0();
      FUN_00633420();
      local_84 = (code *)(undefined4)local_24;
      local_8c = (undefined8 *)(undefined4)local_2c;
      local_88 = (undefined4 **)local_2c._4_4_;
      local_90 = local_24._4_4_;
      local_94 = (undefined4)local_24;
      uStack_a0 = 0;
      uStack_a4 = 0;
      puStack_b4 = (undefined1 *)&local_b0;
      local_9c = (undefined4)local_2c;
      local_98 = local_2c._4_4_;
      local_b0 = DAT_00c8a9c8;
      iStack_ac = iVar2;
      iStack_a8 = iVar2;
      FUN_006cb390(&puStack_b4);
      FUN_006c9d30();
      local_88 = &local_14;
      if ((local_5c & 0x70) == 0) {
        local_84 = FUN_00410536;
      }
      else {
        local_84 = FUN_00426f1d;
      }
      local_8c = (undefined8 *)0x6cafeb;
      FUN_004b0b00();
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_14 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          local_84 = (code *)0x6cb003;
          (**(code **)*local_14)();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}


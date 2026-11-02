// rea decompile_all
// name: FUN_00014238
// address: 0x14238
// body: available
// range: 0x14238-0x144ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014238(void)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_res10 [2];
  longlong local_res18 [2];
  
  lVar1 = DAT_00029268;
  local_res18[1] = 0;
  local_res18[0] = 0;
  iVar2 = FUN_00016dd8(local_res18 + 1,local_res18,L"Settings");
  if (iVar2 < 0) {
    if (local_res18[0] != 0) {
      ZwClose();
    }
  }
  else {
    local_res10[0] = *(uint *)(lVar1 + 0x734);
    FUN_00011568(local_res18,L"SampleRate[Hz]",local_res10,local_res10[0]);
    puVar6 = &DAT_000275b0;
    uVar5 = 32000;
    puVar3 = &DAT_000275b0;
    uVar4 = 32000;
    do {
      if (uVar4 == local_res10[0]) goto LAB_000142d1;
      puVar3 = puVar3 + 5;
      uVar4 = *puVar3;
    } while (uVar4 != 0);
    puVar3 = (uint *)0x0;
LAB_000142d1:
    if (puVar3 != (uint *)0x0) {
      *(uint *)(lVar1 + 0x734) = local_res10[0];
      do {
        if (uVar5 == local_res10[0]) goto LAB_000142f0;
        puVar6 = puVar6 + 5;
        uVar5 = *puVar6;
      } while (uVar5 != 0);
      puVar6 = (uint *)0x0;
LAB_000142f0:
      if (puVar6 == (uint *)0x0) {
        *(undefined4 *)(lVar1 + 0x734) = 48000;
      }
    }
    local_res10[0] = *(uint *)(lVar1 + 0x730);
    FUN_00011568(local_res18,L"SampleRateSelectionMode",local_res10,local_res10[0]);
    if ((local_res10[0] == 0) || (local_res10[0] == 1)) {
      *(uint *)(lVar1 + 0x730) = local_res10[0];
    }
    local_res10[0] = *(uint *)(lVar1 + 0x72c);
    FUN_00011568(local_res18,L"DomainSynchMode",local_res10,local_res10[0]);
    if ((local_res10[0] == 0) || (local_res10[0] == 1)) {
      *(uint *)(lVar1 + 0x72c) = local_res10[0];
    }
    FUN_00011568(local_res18,L"IsoStreamBufferDepth[ms]",(undefined4 *)(lVar1 + 0x738),
                 *(undefined4 *)(lVar1 + 0x738));
    FUN_00011568(local_res18,L"AsioBufferSamples",(undefined4 *)(lVar1 + 0x73c),
                 *(undefined4 *)(lVar1 + 0x73c));
    FUN_00011568(local_res18,L"KsBufferDepth[us]",(undefined4 *)(lVar1 + 0x740),
                 *(undefined4 *)(lVar1 + 0x740));
    FUN_00011568(local_res18,L"PrependDeviceNameToDisplayName",(undefined4 *)(lVar1 + 0x744),
                 *(undefined4 *)(lVar1 + 0x744));
    FUN_000114d0(local_res18,L"DelayOnStartDevice[ms]",(undefined4 *)(lVar1 + 0x724));
    local_res10[0] = (uint)*(byte *)(lVar1 + 0x728);
    FUN_000114d0(local_res18,L"EnableGsifSupport",local_res10);
    *(bool *)(lVar1 + 0x728) = local_res10[0] != 0;
    FUN_00011568(local_res18,L"RequestTimeout[ms]",(undefined4 *)(lVar1 + 0x748),
                 *(undefined4 *)(lVar1 + 0x748));
    FUN_00011568(local_res18,L"MidiOutBufferSize",(undefined4 *)(lVar1 + 0x74c),
                 *(undefined4 *)(lVar1 + 0x74c));
    FUN_00011568(local_res18,L"MidiTransmitRate",(undefined4 *)(lVar1 + 0x750),
                 *(undefined4 *)(lVar1 + 0x750));
    local_res10[0] = (uint)*(byte *)(lVar1 + 0x75c);
    FUN_00011568(local_res18,L"EnableLatencyControl",local_res10,local_res10[0]);
    *(bool *)(lVar1 + 0x75c) = local_res10[0] != 0;
    if (local_res18[0] != 0) {
      ZwClose();
    }
    iVar2 = 0;
  }
  FUN_00016db0(local_res18 + 1);
  return iVar2;
}


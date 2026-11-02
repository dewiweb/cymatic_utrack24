// rea decompile_all
// name: FUN_00014cc0
// address: 0x14cc0
// body: available
// range: 0x14cc0-0x14e75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014cc0(longlong param_1,int param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    iVar2 = -0x3fffffff;
  }
  else {
    uVar3 = (((uint)(*(int *)(param_1 + 0x738) * *(int *)(param_1 + 0x6fc)) / 1000) * 0xb) / 10 +
            0xf & 0xfffffff0;
    uVar4 = (ulonglong)uVar3;
    if (*(uint *)(param_1 + 0x73c) < uVar3) {
      *(uint *)(param_1 + 0x73c) = uVar3;
      iVar2 = FUN_000144d4(param_1);
      if (iVar2 < 0) {
        return -0x1fffffa0;
      }
      param_3 = (ulonglong)*(uint *)(param_1 + 0x6fc);
      uVar3 = *(uint *)(param_1 + 0x73c);
      *(uint *)(param_1 + 0x76c) = *(uint *)(param_1 + 0x700);
      *(uint *)(param_1 + 0x70c) = uVar3;
      *(uint *)(param_1 + 0x774) = uVar3;
      *(int *)(param_1 + 0x770) = (int)(((ulonglong)*(uint *)(param_1 + 0x700) * 1000000) / param_3)
      ;
      *(uint *)(param_1 + 0x768) = *(uint *)(param_1 + 0x6fc);
      uVar4 = ((ulonglong)uVar3 * 1000000) % param_3;
      *(int *)(param_1 + 0x778) = (int)(((ulonglong)uVar3 * 1000000) / param_3);
    }
    FUN_00016cf8(plVar1);
    if ((param_2 == 0) && (iVar2 = FUN_00014b84(param_1), iVar2 < 0)) {
      pcVar5 = "DiscoverAllDevices failed.";
    }
    else {
      iVar2 = FUN_00015028(DAT_00029268,uVar4,param_3);
      if (iVar2 < 0) {
        pcVar5 = "ConfigureAllDevices failed.";
      }
      else {
        iVar2 = FUN_00015220();
        if (iVar2 < 0) {
          pcVar5 = "ConfigureAllStreams failed.";
        }
        else if ((param_2 == 0) && (iVar2 = FUN_000158e0((int)DAT_00029268), iVar2 < 0)) {
          pcVar5 = "CreateAllBoundles failed.";
        }
        else {
          iVar2 = FUN_00015aa8();
          if (-1 < iVar2) {
            FUN_00015c40();
            FUN_00015e00(param_1,2,0,0,3);
            *(undefined1 *)(param_1 + 0x7c0) = 1;
            return 0;
          }
          pcVar5 = "CreateAllKsChildDevices failed.";
        }
      }
    }
    FUN_000118cc(*(undefined8 *)(DAT_00029268 + 0x10),0xe0070003,pcVar5);
  }
  return iVar2;
}


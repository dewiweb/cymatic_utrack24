// rea decompile_all
// name: FUN_000125b4
// address: 0x125b4
// body: available
// range: 0x125b4-0x1269b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_000125b4(longlong param_1,undefined4 param_2,ulonglong *param_3,uint param_4)

{
  short sVar1;
  short *_Src;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  short *psVar7;
  
  lVar4 = IoAllocateIrp(*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x4c),0);
  if (lVar4 == 0) {
    iVar3 = -0x3fffff66;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0xb8);
    *(undefined1 *)(lVar5 + -0x48) = 0x1b;
    *(undefined1 *)(lVar5 + -0x47) = 0x13;
    *(undefined4 *)(lVar5 + -0x40) = param_2;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined4 *)(lVar4 + 0x30) = 0xc00000bb;
    iVar3 = FUN_000126fc(param_1,lVar4,0);
    if ((-1 < iVar3) && (_Src = *(short **)(lVar4 + 0x38), _Src != (short *)0x0)) {
      lVar5 = -1;
      psVar7 = _Src;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
      } while (sVar1 != 0);
      uVar2 = ~(uint)lVar5 * 2;
      FUN_000264d0(param_3,0,(ulonglong)param_4);
      uVar6 = param_4 - 1;
      if (uVar2 < param_4 - 1) {
        uVar6 = uVar2;
      }
      memcpy(param_3,_Src,(ulonglong)uVar6);
      iVar3 = 0;
      ExFreePoolWithTag(_Src,0);
    }
    IoFreeIrp(lVar4);
  }
  return iVar3;
}


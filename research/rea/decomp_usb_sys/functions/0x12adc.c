// rea decompile_all
// name: FUN_00012adc
// address: 0x12adc
// body: available
// range: 0x12adc-0x12cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00012adc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *_Src;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *_Dst;
  int iVar9;
  
  iVar9 = 0;
  lVar8 = 0;
  plVar1 = (longlong *)(param_1 + 0xa0);
LAB_00012b05:
  if (lVar8 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_00012b38;
    lVar8 = *plVar1 - *(longlong *)(param_1 + 0xb0);
  }
  else {
    plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0xb0));
    if (plVar2 == plVar1) goto LAB_00012b38;
    lVar8 = (longlong)plVar2 - *(longlong *)(param_1 + 0xb0);
  }
  if (lVar8 == 0) goto LAB_00012b38;
  if (*(char *)(lVar8 + 0x28) != '\0') {
    iVar9 = iVar9 + 1;
  }
  goto LAB_00012b05;
LAB_00012b38:
  _Src = *(uint **)(param_2 + 0x38);
  if (_Src != (uint *)0x0) {
    iVar9 = *_Src + iVar9;
  }
  uVar6 = iVar9 * 8 + 8;
  _Dst = (ulonglong *)ExAllocatePoolWithTag(1,uVar6,0x6f645043);
  if (_Dst == (ulonglong *)0x0) {
    uVar7 = 0xc000009a;
    *(undefined4 *)(param_2 + 0x30) = 0xc000009a;
    IofCompleteRequest(param_2);
  }
  else {
    FUN_000264d0(_Dst,0,(ulonglong)uVar6);
    if (_Src != (uint *)0x0) {
      memcpy(_Dst,_Src,(ulonglong)*_Src * 8 + 8);
      ExFreePoolWithTag(_Src,0);
    }
    if ((longlong *)*plVar1 != plVar1) {
      lVar8 = *plVar1 - *(longlong *)(param_1 + 0xb0);
      while (lVar5 = lVar8, lVar5 != 0) {
        if (lVar5 == 0) {
          if ((longlong *)*plVar1 == plVar1) {
LAB_00012bf8:
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar1 - *(longlong *)(param_1 + 0xb0);
          }
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + lVar5);
          if (plVar2 == plVar1) goto LAB_00012bf8;
          lVar8 = (longlong)plVar2 - *(longlong *)(param_1 + 0xb0);
        }
        uVar3 = *(ulonglong *)(lVar5 + 0x10);
        if (*(char *)(lVar5 + 0x28) == '\0') {
          lVar4 = *(longlong *)(lVar5 + 0x30);
          *(undefined1 *)(lVar5 + 0x29) = 1;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar5 + 0x30) = 0;
            plVar2 = (longlong *)(lVar5 + *(longlong *)(lVar4 + 0xb0));
            *(longlong *)plVar2[1] = *plVar2;
            *(longlong *)(*plVar2 + 8) = plVar2[1];
            plVar2[1] = (longlong)plVar2;
            *plVar2 = (longlong)plVar2;
            *(int *)(lVar4 + 0xb8) = *(int *)(lVar4 + 0xb8) + -1;
            if (*(longlong *)(lVar4 + 0xf0) == lVar5) {
              *(undefined8 *)(lVar4 + 0xf0) = 0;
            }
          }
        }
        else {
          ObfReferenceObject(uVar3);
          _Dst[(ulonglong)(uint)*_Dst + 1] = uVar3;
          *(int *)_Dst = (int)*_Dst + 1;
        }
      }
    }
    *(undefined4 *)(param_2 + 0x30) = 0;
    *(char *)(param_2 + 0x43) = *(char *)(param_2 + 0x43) + '\x01';
    *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 0x48;
    *(ulonglong **)(param_2 + 0x38) = _Dst;
    uVar7 = IofCallDriver(*(undefined8 *)(param_1 + 0x68),param_2);
  }
  return uVar7;
}


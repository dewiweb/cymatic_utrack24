// rea decompile_all
// name: FUN_00013644
// address: 0x13644
// body: available
// range: 0x13644-0x13771 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00013644(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  undefined1 auStack_138 [32];
  undefined2 local_118;
  undefined2 local_116;
  ulonglong *local_110;
  ulonglong local_108 [30];
  ulonglong local_18;
  
  local_18 = DAT_00029100 ^ (ulonglong)auStack_138;
  lVar3 = *(longlong *)(param_2 + 0xb8);
  FUN_000264d0(local_108,0,0xf0);
  local_118 = 0;
  local_110 = local_108;
  local_116 = 0xf0;
  iVar2 = RtlAppendUnicodeToString(&local_118,*(undefined8 *)(param_1 + 0x48));
  if (iVar2 == 0) {
    iVar2 = *(int *)(lVar3 + 8);
    if ((iVar2 == 0) || (iVar2 == 1)) {
      uVar4 = 0xffffffffffffffff;
      puVar5 = local_108;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        uVar1 = *puVar5;
        puVar5 = (ulonglong *)((longlong)puVar5 + 2);
      } while ((short)uVar1 != 0);
      lVar3 = ExAllocatePoolWithTag(1,(int)~uVar4 * 2 + 2,0x6f645043);
      if (lVar3 != 0) {
        puVar5 = local_108;
        do {
          uVar1 = *puVar5;
          *(short *)((lVar3 - (longlong)local_108) + (longlong)puVar5) = (short)uVar1;
          puVar5 = (ulonglong *)((longlong)puVar5 + 2);
        } while ((short)uVar1 != 0);
        *(undefined2 *)(lVar3 + (~uVar4 & 0xffffffff) * 2) = 0;
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(longlong *)(param_2 + 0x38) = lVar3;
        IofCompleteRequest(param_2,0);
        goto LAB_0001374b;
      }
      goto LAB_000136f4;
    }
    uVar6 = 0xc00000bb;
  }
  else {
LAB_000136f4:
    uVar6 = 0xc000009a;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x30) = uVar6;
  IofCompleteRequest(param_2,0);
LAB_0001374b:
  FUN_00026110(local_18 ^ (ulonglong)auStack_138);
  return;
}

